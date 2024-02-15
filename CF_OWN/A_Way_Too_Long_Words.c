#include <stdio.h>
#include <string.h>

int main()
{

    int n;

    scanf("%d", &n);

    char words[n][101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &words[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int stLen = strlen(words[i]);

        if (stLen > 10)
        {
            int _len = stLen - 2;
            printf("%c%d%c\n", words[i][0], _len, words[i][stLen - 1]);
        }
        else
        {
            printf("%s\n", words[i]);
        }
    }

    return 0;
}