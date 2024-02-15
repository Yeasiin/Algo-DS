#include <stdio.h>

int main()
{
    long long int x;
    scanf("%lld", &x);
    long long int sumOf = x * (x + 1) / 2;

    printf("%lld", sumOf);

    return 0;
}