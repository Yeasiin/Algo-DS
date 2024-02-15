#include <stdio.h>

int main()
{

    int m;

    scanf("%d", &m);

    int arr1[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int n;
    scanf("%d", &n);

    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[m + n];

    for (int i = 0; i < (m + n); i++)
    {
        if (i < m)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i - m];
        }
    }

    for (int i = 0; i < (m + n); i++)
    {
        printf("%d \n", arr3[i]);
    }

    return 0;
}