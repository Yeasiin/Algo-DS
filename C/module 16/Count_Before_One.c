#include <stdio.h>

int count_before_one(int *arr, int arrSz)
{

    int index = 0;

    for (int i = 0; i < arrSz; i++)
    {

        if (arr[i] == 1)
        {
            // printf("%d\n", i);
            index = i;
            break;
        }
        index = i + 1;
    }
    return index;
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

    int beforeOne = count_before_one(arr, n);

    printf("%d", beforeOne);

    return 0;
}