#include <stdio.h>
#include <limits.h>

int fun(int *arr, int arrSz, int i)
{
    if (arrSz == i)
    {
        return INT_MIN;
    }

    int max = fun(arr, arrSz, i + 1);

    if (arr[i] > max)
    {
        return arr[i];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = fun(arr, n, 0);

    printf("%d \n", max);

    return 0;
}