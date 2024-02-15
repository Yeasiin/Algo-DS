#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int treeTop = 5;
    if (n != 1)
    {
        treeTop += n / 2;
    }
    treeTop += 1;

    int space = treeTop - 1;
    int star = 1;

    for (int i = 0; i < treeTop; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }

    for (int j = 0; j < 5; j++)
    {
        for (int j = 0; j < treeTop - n + (n / 2); j++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}