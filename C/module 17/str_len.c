#include <stdio.h>

int str_len(char *s, int i)
{

    if (s[i] == '\0')
        return 0;

    int acc = str_len(s, i + 1);

    return acc += 1;
}

int main()
{
    char s[100];

    scanf("%s", &s);

    printf("%d", str_len(s, 0));

    return 0;
}