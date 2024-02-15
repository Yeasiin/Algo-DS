#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1, s = n - 1;

    for (int j = 0; j < (n * 2) - 1; j++)
    {

        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < k; i++)
        {
            if (j % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");

        if (j > n - 2)
        {
            s++;
            k -= 2;
        }
        else
        {
            s--;
            k += 2;
        }
    }

    return 0;
}