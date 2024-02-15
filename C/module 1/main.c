#include <stdio.h>

int main()
{

    int num;

    scanf("%d", &num);

    if (num)
    {
        printf("inside printf");
    }
    else
    {
        printf("inside else block");
    }

    return 0;
}