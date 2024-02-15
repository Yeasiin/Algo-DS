#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = 0;
    // primary diagonal
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                primarySum += arr[i][j];
            }
        }
    }

    // printf("%d", primarySum);

    int secondarySum = 0;

    // secondary diagonal
    for (int i = 0; i < n; i++)
    {

        secondarySum += arr[i][(n - 1) - i];
    }

    int sum = primarySum - secondarySum;

    if (sum < 0)
    {
        sum *= -1;
    }

    printf("%d ", sum);

    return 0;
}