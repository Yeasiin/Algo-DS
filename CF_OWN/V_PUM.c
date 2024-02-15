#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int number = 0;

    for (int i = 1; i <= n * 4; i++)
    {
        if (i % 4 == 0)
        {
            printf("PUM\n");
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}