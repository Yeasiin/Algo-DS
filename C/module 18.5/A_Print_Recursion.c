#include <stdio.h>

void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);
    printf("I love Recursion\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    fun(n);

    return 0;
}