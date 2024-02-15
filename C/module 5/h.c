#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    int rFloor = floor(x / (float)y);
    int rCeil = ceil(x / (float)y);
    int rRound = round(x / (float)y);

    printf("floor %d / %d = %d\n", x, y, rFloor);
    printf("ceil %d / %d = %d\n", x, y, rCeil);
    printf("round %d / %d = %d\n", x, y, rRound);

    return 0;
}