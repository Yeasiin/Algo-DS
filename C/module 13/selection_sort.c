#include <stdio.h>

int main()
{
    int n;
    // number of input value (array length)
    scanf("%d", &n);

    int arr[n];
    // input array value
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // ascending sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // descending sort
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}