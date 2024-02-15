#include <stdio.h>

void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    fun(n / 10);

    printf("%d ", n % 10);
}

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("%d", n);
        }
        else
        {
            fun(n);
        }
        printf("\n");
    }

    return 0;
}