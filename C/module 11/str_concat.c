#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    scanf("%s %s", &a, &b);

    int aLen = strlen(a);

    int i = 0;
    while (1)
    {
        a[aLen + i] = b[i];

        if (b[i] == '\0')
        {
            break;
        }
        i++;
    }

    strcat(b, a);

    printf("%s\n", a);

    return 0;
}