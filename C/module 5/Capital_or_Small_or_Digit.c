// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

#include <stdio.h>

int main()
{

    char x;
    scanf("%c", &x);

    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (x >= 65 && x <= 122)
    {
        printf("ALPHA\n");
        if (x >= 65 && x <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else if (x >= 97 && x <= 122)
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}