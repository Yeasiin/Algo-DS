#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1;
        scanf("%d", &m1);

        int m2;
        scanf("%d", &m2);

        int d;
        scanf("%d", &d);

        float fraction = (float)m1 / d;

        int diff = fraction * (m1 + m2);

        printf("%f\n", fraction);
    }

    return 0;
}
