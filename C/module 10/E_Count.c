#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[1000001];
    scanf("%s", n);

    int sum = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        int digit = n[i] - '0';
        sum += digit;
    }
    printf("%d", sum);

    return 0;
}