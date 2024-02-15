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
    // # implementation 1 (own)
    // for (int j = 0; j < n; j++)
    // {
    //     int temp = arr[j];
    //     int lastIndex = (n - 1) - j;

    //     if (j > (n / 2))
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         arr[j] = arr[lastIndex];
    //         arr[lastIndex] = temp;
    //     }
    // }

    // # implementation 1 (instructor)
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[j];
        int lastIndex = (n - 1) - j;

        arr[j] = arr[lastIndex];
        arr[lastIndex] = temp;
        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d \n", arr[k]);
    }

    return 0;
}