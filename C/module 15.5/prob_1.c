#include <stdio.h>

int my_abs(int *number)
{

    if (*number < 0)
    {
        *number *= -1;
    }

    return *number;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", my_abs(&n));

    return 0;
}