#include <stdio.h>

long long fun(int n)
{
    if (n == 0)
        return 1;

    return n * fun(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int total = fun(n);

    printf("%lld\n", total);

    return 0;
}