#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    char arr[n][100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        int wordCount = 0;
        for (int k = 0; arr[j][k] != '\0'; k++)
        {

            wordCount++;
        }

        if (wordCount > 10)
        {

            printf("%c%d%c\n", arr[j][0], wordCount - 2, arr[j][wordCount - 1]);
        }
        else
        {
            printf("%s\n", arr[j]);
        }
    }

    return 0;
}