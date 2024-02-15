#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum;
    scanf("%d", &sum);

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("got it %d %d", arr[i], arr[j]);
            }

            printf("%d => %d \n", arr[i], arr[j]);
        }
    }

    return 0;
}