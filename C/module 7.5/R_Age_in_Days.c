#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int year = n / 365;
    n -= year * 365;

    int month = n / 30;
    n -= month * 30;

    printf("%d years\n", year);

    printf("%d months\n", month);

    printf("%d days\n", n);

    return 0;
}