#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n];

        for (int i = 0; i < n; i++)
        {
            int sum = a[i] - b[i];
            if (sum < 0)
            {
                sum *= -1;
            }
            c[i] = sum;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}