#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    int totalNextRound = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int baseFinisher = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= baseFinisher && arr[i] > 0)
        {
            totalNextRound++;
        }
    }

    printf("%d", totalNextRound);

    return 0;
}