#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int step = 0;

    while (x > 0)
    {

        if ((x - 5) >= 0)
        {
            step++;
            x -= 5;
        }
        else if ((x - 4) >= 0)
        {

            step++;
            x -= 4;
        }
        else if ((x - 3) >= 0)
        {

            step++;
            x -= 3;
        }
        else if ((x - 2) >= 0)
        {
            step++;
            x -= 2;
        }
        else if ((x - 1) >= 0)
        {
            step++;
            x -= 1;
        }
    }

    printf("%d", step);

    return 0;
}