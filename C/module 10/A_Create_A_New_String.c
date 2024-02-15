#include <stdio.h>
#include <string.h>

int main()
{

    char s[1001];
    char t[1001];

    scanf("%s", s);
    scanf("%s", t);

    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);

    return 0;
}