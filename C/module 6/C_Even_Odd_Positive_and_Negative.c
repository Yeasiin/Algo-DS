#include <stdio.h>

int main()
{
    int countEven = 0, countOdd = 0, countPositive = 0, countNegative = 0;

    int numOfValue = 0;
    scanf("%d", &numOfValue);

    int index = 0;
    int n;

    while (index < numOfValue && scanf("%d", &n) == 1)
    {
        if (n % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }

        if (n > 0)
        {
            countPositive++;
        }
        else if (n < 0)
        {
            countNegative++;
        }
        index++;
    }

    printf("Even: %d\n", countEven);
    printf("Odd: %d\n", countOdd);
    printf("Positive: %d\n", countPositive);
    printf("Negative: %d\n", countNegative);

    return 0;
}