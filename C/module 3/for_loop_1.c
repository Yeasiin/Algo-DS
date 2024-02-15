#include <stdio.h>

int factorial(int fct);
int sieve(int eratosthenes);

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        // printf("hello world %d \n", i);
    }

    for (int i = 11; i >= 0; i -= 2)
    {
        // printf("%d\n", i);
    }

    factorial(8);
    sieve(20);

    return 0;
}

int factorial(int fct)
{
    int pervValue;
    for (int i = fct; i >= 1; i--)
    {
        if (pervValue == 0)
        {
            pervValue = i;
            continue;
        }
        pervValue = pervValue * i;
    }

    printf("%d - prev\n", pervValue);
}

int sieve(int eratosthenes)
{
    int sie[] = {0};
    int currentArrayIndex = 0;

    for (int i = 1; i <= eratosthenes; i++)
    {
        if (i == 1)
        {
            printf("special case \n");
            continue;
        }
        int tracking;
        for (int j = 2; j <= 10; j++)
        {
            if (i / j)
            {
                tracking = 1;
            }
            else
            {
                tracking = 0;
            }
        }
    }
}
