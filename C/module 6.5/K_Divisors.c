/* #include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int index = 1;
    while (x >= index)
    {
        if (x % index == 0)
        {
            printf("%d\n", index);
        }

        index++;
    }

    return 0;
} */

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}