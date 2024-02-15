#include <stdio.h>

void printArr(int *arr, int arrSz, int i)
{
    if (arrSz == i)
        return;

    printf("%d\n", arr[i]);

    printArr(arr, arrSz, i + 1);
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

    printArr(arr, n, 0);

    return 0;
}