// Given a number X.
// Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int reminder;
    int base = 10;
    do
    {
        reminder = x / base;
        base = base * 10;
        if (reminder < 10)
        {
            if (reminder % 2 == 0)
            {
                printf("EVEN");
            }
            else
            {
                printf("ODD");
            }
        }

    } while (reminder >= 10);

    return 0;
}