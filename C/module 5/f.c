#include <stdio.h>

int main()
{
    long long int n, m;

    scanf("%lld %lld", &n, &m);

    int lastOfN = n % 10;

    int lastOfM = m % 10;

    int sumOf = lastOfN + lastOfM;

    printf("%d\n", sumOf);

    return 0;
}