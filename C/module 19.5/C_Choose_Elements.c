#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int trackK = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            sum = sum + arr[i];
            trackK++;
        }
        if (trackK == k)
        {
            break;
        }
    }

    printf("\n\n%lld", sum);

    return 0;
}