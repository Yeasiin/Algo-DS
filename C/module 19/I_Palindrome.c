#include <stdio.h>
#include <string.h>

int fun(char *s, int endIndex, int i)
{

    if (i > (endIndex / 2))
    {
        return 1;
    }

    if (s[i] == s[endIndex])
    {
        fun(s, endIndex - 1, i + 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[1001];

    scanf("%s", &s);

    int isPalindrome = fun(s, strlen(s) - 1, 0);

    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}