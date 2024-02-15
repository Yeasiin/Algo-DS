#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int diff = a - b;
    if (diff > 0)
    {
        printf("%d", diff);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}