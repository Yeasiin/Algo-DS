#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        char n[7];
        scanf("%s", &n);

        int sumLeft = 0;
        int sumRight = 0;

        for (int j = 0; n[j] != '\0'; j++)
        {

            if (j >= 3)
            {
                sumRight += n[j];
            }
            else
            {
                sumLeft += n[j];
            }
        }

        if (sumLeft == sumRight)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}