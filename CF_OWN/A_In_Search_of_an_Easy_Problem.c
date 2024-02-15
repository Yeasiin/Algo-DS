#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int isHard = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
        {
            isHard = 1;
            break;
        }
    }

    if (isHard)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

    return 0;
}