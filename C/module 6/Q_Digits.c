#include <stdio.h>

int main()
{
    int numOfValue;
    scanf("%d", &numOfValue);

    for (int i = 0; i < numOfValue; i++)
    {
        int n;
        scanf("%d", &n);
        int remember = n;
        int lastDig;

        do
        {
            lastDig = remember % 10;
            remember = remember / 10;
            printf("%d ", lastDig);
        } while (remember > 0);
        printf("\n");
    }

    return 0;
}