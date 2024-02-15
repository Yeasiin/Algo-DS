#include <stdio.h>

int main()
{
    double n;
    scanf("%lf", &n);

    double PI = 3.141592653;

    double area = PI * n * n;

    printf("%.9lf\n", area);

    return 0;
}