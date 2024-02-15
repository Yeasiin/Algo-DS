#include <stdio.h>

int main()
{
    static int pubStatic = 10;
    int tk;

    // scanf("%d", &tk);
    tk = 100;

    if (tk >= 100)
    {
        printf("burger khabo\n");
    }
    else if (tk >= 50)
    {
        printf("fuchka khabo");
    }
    else
    {
        printf("taka nai bhai");
    }

    return 0;
}
