#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int position;
    int lowest = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i] <= lowest)
        {
            if (lowest == arr[i])
            {
                continue;
            }
            lowest = arr[i];
            position = i + 1;
        }
    }
    printf("%d %d", lowest, position);

    return 0;
}