#include <stdio.h>

int main()
{

    char cap[1001];

    scanf("%s", &cap);

    if (cap[0] > 'Z')
    {
        cap[0] -= 32;
    }

    printf("%s", cap);

    return 0;
}