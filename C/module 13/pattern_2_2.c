#include <stdio.h>

int main()
{
    int n, k, j;

    scanf("%d", &n);

    k = n - 1;
    j = 1;

    for (int i = 0; i < n; i++)
    {

        for (int t = 0; t < k; t++)
        {
            printf(" ");
        }

        for (int t = 0; t < j; t++)
        {
            printf("*");
        }

        printf("\n");
        k--;
        j += 2;
    }

    return 0;
}