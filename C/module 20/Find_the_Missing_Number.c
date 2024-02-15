#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long halfTotal = a * b * c;

        long long missing = m / halfTotal;

        long long total = halfTotal * missing;

        if (total == m)
        {
            printf("%lld\n", missing);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
