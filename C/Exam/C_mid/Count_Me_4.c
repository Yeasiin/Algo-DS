#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[10001];

    scanf("%s", &s);

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'])
        {
            printf("%c - %d\n", i, count[i - 'a']);
        }
    }

    return 0;
}
