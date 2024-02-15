// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter.
// Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include <stdio.h>

int main()
{

    char a = "Q";
    char x;

    scanf("%c", &x);

    if ((x + 32) > 122)
    {
        printf("%c\n", x - 32);
    }
    else
    {
        printf("%c\n", x + 32);
    }

    return 0;
}