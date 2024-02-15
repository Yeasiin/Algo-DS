#include <stdio.h>

int main()
{

    int n, m;

    scanf("%d %d", &n, &m);

    int mtx[n][m];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    int flag = 1;

    if (n != m)
    {
        flag = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            int _ro = (n - 1) - (n - 1) + i;
            int _co = (m - 1) - i;

            if (i == j || i == _ro && j == _co)
            {

                if (mtx[i][j] != 1)
                {
                    flag = 0;
                }

                continue;
            }

            if (mtx[i][j] != 0)
            {
                flag = 0;
            }
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

    return 0;
}