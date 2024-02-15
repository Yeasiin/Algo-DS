#include <stdio.h>

void check(int num)
{
    if (num == 0)
    {
        printf("must be positive");
    }
    else if (num > 0)
    {
        printf("Yes number is positive");
    }
    else
    {
        printf("looks like number is negative");
    }
}