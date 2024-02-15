#include <stdio.h>
#include <limits.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minValue = INT_MIN;
    int maxValue = INT_MAX;

    int minIndex, maxIndex;

    for (int i = 0; i < n; i++)
    {

        if (maxValue > arr[i])
        {
            maxValue = arr[i];
            maxIndex = i;
        }

        if (minValue < arr[i])
        {
            minValue = arr[i];
            minIndex = i;
        }
    }

    arr[minIndex] = maxValue;
    arr[maxIndex] = minValue;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("%d %d", minValue, maxValue);

    return 0;
}