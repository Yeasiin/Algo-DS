#include <stdio.h>

char char_to_ascii1(char c)
{

    return c;
}
char char_to_ascii2(void)
{

    char c;
    scanf("%c", &c);
    return c;
}
void char_to_ascii3(void)
{

    char c;
    scanf("%c", &c);
    printf("%d\n", c);
}

int main()
{

    char c;

    scanf("%c", &c);

    printf("%d \n", char_to_ascii1(c));
    printf("%d \n", char_to_ascii2());
    char_to_ascii3();

    return 0;
}