#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &a);
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            position = i;
            break;
        }
    }
    printf("%d", position);

    return 0;
}