#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        char s[11];
        char source[] = "codeforces";

        scanf("%s", &s);

        int i = 0;
        int differ = 0;

        while (s[i] != '\0')
        {
            if (s[i] != source[i])
            {
                differ++;
            }

            i++;
        }
        printf("%d\n", differ);
    }

    return 0;
}