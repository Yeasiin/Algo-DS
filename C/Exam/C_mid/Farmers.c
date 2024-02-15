#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int m1;
        int m2;
        int d;

        scanf("%d", &m1);

        scanf("%d", &m2);

        scanf("%d", &d);

        int perUnitDay = m1 * d;

        int totalDay = perUnitDay / (m1 + m2);

        printf("%d\n", d - totalDay);
    }

    return 0;
}