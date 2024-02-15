#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100], d[100];

    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);

    for (int i = 0; i < 100; i++)
    {
        a[i] = b[i];

        if (b[i] == '\0')
            break;
    }

    strcpy(d, c);

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", d);

    return 0;
}