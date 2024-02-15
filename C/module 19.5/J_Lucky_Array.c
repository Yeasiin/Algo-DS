#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minNum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
        }
    }

    int timesOccurrence = 0;
    // times of occurrence;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == minNum)
        {
            timesOccurrence += 1;
        }
    }

    if (timesOccurrence % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}