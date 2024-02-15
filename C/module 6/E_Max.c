#include <stdio.h>

int main()
{
    int numOfValue;
    scanf("%d", &numOfValue);

    int index = 0;
    int max = 0;
    int n;

    while (numOfValue > index && scanf("%d", &n) == 1)
    {
        index++;
        if (n > max)
        {
            max = n;
        }
    }

     printf("%d", max);

    return 0;
}