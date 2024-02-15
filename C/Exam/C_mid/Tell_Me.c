#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &arr[j]);
        }

        int x;
        scanf("%d", &x);

        int isContain = 0;

        for (int k = 0; k < n; k++)
        {

            if (arr[k] == x)
            {
                isContain = 1;
                break;
            }
        }

        if (isContain)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
