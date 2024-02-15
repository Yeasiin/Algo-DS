#include <stdio.h>

int main()
{
    float n, x;

    scanf("%f %f", &x, &n);

    float unit = n / (100 - x);

    float discount = x * unit;

    float prevPrice = discount + n;

    printf("%.2f", prevPrice);

    return 0;
}