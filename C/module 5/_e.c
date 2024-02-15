#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    double area = (3.141592653 * a) * 2;
    printf("%.9lf", area);

    return 0;
}