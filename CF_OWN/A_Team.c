#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {

        int arr[3];
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

        int _sum = arr[0] + arr[1] + arr[2];

        if (_sum >= 2)
        {
            totalSum++;
        }
    }

    printf("%d", totalSum);

    return 0;
}