#include <stdio.h>
#include <string.h>

int fun(char *s, int len, int i)
{
    if (len == i)
        return 0;

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] += 32;
    }

    int count = 0;
    if (
        s[i] == 'a' ||
        s[i] == 'e' ||
        s[i] == 'i' ||
        s[i] == 'o' ||
        s[i] == 'u')
    {
        count = 1;
    }
    else
    {
        count = 0;
    }

    return count + fun(s, len, i + 1);
}

int main()
{
    char s[201];

    fgets(s, 201, stdin);

    printf("%d", fun(s, strlen(s), 0));

    return 0;
}