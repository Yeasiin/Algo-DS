#include <stdio.h>

long long fun(int *arr, int arrSize, int i)
{

    if (i == arrSize)
        return 0;

    return arr[i] + fun(arr, arrSize, i + 1);
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

    long long total = fun(arr, n, 0);

    printf("%lld", total);

    return 0;
}