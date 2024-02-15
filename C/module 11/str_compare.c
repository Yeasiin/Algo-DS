#include <stdio.h>
#include <string.h>

// lexicographically  compare
int main()
{
    char a[100], b[100];

    scanf("%s %s", &a, &b);

    int index = 0;
    while (1)
    {

        if (a[index] == '\0' && b[index] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[index] == '\0')
        {
            printf("A Smaller\n");
            break;
        }
        else if (b[index] == '\0')
        {
            printf("B Smaller\n");
            break;
        }

        if (a[index] == b[index])
        {
            index++;
        }
        else if (a[index] < b[index])
        {
            printf("A is Smaller");
            break;
        }
        else
        {
            printf("B is Smaller");
            break;
        }
    }

    int v = strcmp(a, b);

    if (v < 0)
    {
        printf("\nCompare a is Smaller");
    }
    else if (v > 0)
    {
        printf("\n Compare b is smaller");
    }
    else
    {
        printf("\n Compare Same");
    }

    // printf("\ncompare %d", v);

    return 0;
}