#include <stdio.h>

void fun(int *arr, int arrSize, int index)
{
    if (index >= arrSize)
        return;

    fun(arr, arrSize, index + 2);
    printf("%d ", arr[index]);
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

    fun(arr, n, 0);

    return 0;
}