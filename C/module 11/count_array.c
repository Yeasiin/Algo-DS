#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int count[max];

    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < max; i++)
    {
        if (count[i] != 0)
        {
            printf("%d => %d\n", i, count[i]);
        }
    }

    return 0;
}