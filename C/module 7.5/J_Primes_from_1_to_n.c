#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {

        // because the question is inclusive number. so if number is divisible by more then 1 time then it is Composite. otherwise prime
        int isComposite = 0;

        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                isComposite += 1;
            }
        }

        if (isComposite < 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}