#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    long long n, e;
    cin >> n >> e;

    long long int adj[n + 1][n + 1];

    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {

            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                adj[i][j] = 1e18;
            }
        }
    }

    for (int i = 1; i <= e; i++)
    {
        long long int a, b, w;
        cin >> a >> b >> w;

        if (w < adj[a][b])
        {
            adj[a][b] = w;
        }
    }

    for (long long k = 1; k <= n; k++)
    {
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    long long q;
    cin >> q;

    for (long long i = 1; i <= q; i++)
    {
        long long a, b;
        cin >> a >> b;
        if (adj[a][b] == 1e18)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[a][b] << endl;
        }
    }

    return 0;
}