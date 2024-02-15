#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int isComposite = 0;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            isComposite = 1;
            break;
        }
    }
    // if is not composite then it must be prime. composite meaning that the number is divisible by 1, it-self and more number;
    if (isComposite)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}