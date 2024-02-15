#include <stdio.h>

int main()
{
    unsigned long long int a, b, c, d;

    scanf("%ull %llu %llu %llu", &a, &b, &c, &d);

    unsigned long long int multiplication = a * b * c * d;

    unsigned long long int lastTwoDigit = multiplication;

    __int128_t my_very_large_number = *(__int128 *)3295276052054237601056821992795000;

    printf("My very large number is: %llu\n", my_very_large_number);
    // printf("%llu\n", lastTwoDigit);

    return 0;
}