#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    int currentNumber = 1;

    do
    {
        if (x < 2)
        {
            printf("%d\n", -1);
        }
        if (currentNumber % 2 == 0)
        {
            printf("%d\n", currentNumber);
        }
        currentNumber += 1;

    } while (currentNumber <= x);

    return 0;
}