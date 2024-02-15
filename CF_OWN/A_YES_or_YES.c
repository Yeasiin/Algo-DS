#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    char source[] = "yes";

    for (int i = 0; i < t; i++)
    {

        char n[4];

        scanf("%s", &n);

        int flag = 0;

        for (int j = 0; n[j] != '\0'; j++)
        {

            if (n[j] < 'a')
            {
                n[j] += 32;
            }

            if (n[j] == source[j])
            {
                flag = 1;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}