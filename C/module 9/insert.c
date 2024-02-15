#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    for (int j = n; j >= pos; j--)
    {

        arr[j] = arr[j - 1];
    }

    arr[pos] = val;

    for (int j = 0; j <= n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}