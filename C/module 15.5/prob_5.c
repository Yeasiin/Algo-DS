#include <stdio.h>

void swap_it(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    swap_it(&x, &y);

    printf("%d %d", x, y);

    return 0;
}