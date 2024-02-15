#include <stdio.h>

char small_to_capital(char c)
{

    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }

    return c;
}

int main()
{

    char c;

    scanf("%c", &c);
    char result = small_to_capital(c);

    printf("%c", result);
    return 0;
}