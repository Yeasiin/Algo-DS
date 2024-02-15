#include <stdio.h>
#include <string.h>
#include <math.h>

int is_palindrome(char *s)
{

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    int flag = 0;

    for (int i = 0; i < count; i++)
    {

        if (i > (count / 2) - 1)
        {
            flag = 1;
            break;
        }

        if (s[i] == s[(count - 1) - i])
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{

    char s[1001];

    scanf("%s", &s);

    int isPalindrome = is_palindrome(s);

    if (isPalindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}