#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    long long int equation = (a * (long long int)b) - (c * (long long int)d);

    printf("Difference = %lld", equation);

    return 0;
}