
#include <stdio.h>

int my_len(char *c)
{

    int strlen = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        strlen++;
    }

    return strlen;
}

int main()
{

    char c[200];

    scanf("%s", &c);

    printf("%d", my_len(c));

    return 0;
}