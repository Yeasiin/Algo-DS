#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];

    scanf("%s", str);

    // printf("%s\n", str);

    int mystrLen = strlen(str) - 1;

    int isPalindrome = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i > mystrLen)
        {
            break;
        }

        if (str[i] != str[mystrLen - i])
        {
            isPalindrome = 0;
            break;
        }
    }

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