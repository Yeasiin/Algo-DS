#include <stdio.h>

int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int arrA[r][c];
    int arrB[r][c];
    int arrC[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arrA[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arrB[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arrC[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arrC[i][j]);
        }
        printf("\n");
    }

    return 0;
}