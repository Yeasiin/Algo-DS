#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000001];

    fgets(s, 1000001, stdin);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\\')
        {
            s[i] = *"\0";
        }
    }

    printf("%s", s);

    return 0;
}