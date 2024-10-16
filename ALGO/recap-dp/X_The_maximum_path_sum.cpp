#include <bits/stdc++.h>

using namespace std;

const int N = 15;
int g[N][N];

int n, m;

int recur(int i, int j)
{
    if (i == n - 1 && j == m - 1)
    {
        return g[i][j];
    }

    if (i >= n || j >= m)
    {
        return INT_MIN;
    }

    int op1 = recur(i + 1, j);
    int op2 = recur(i, j + 1);

    return max(op1, op2) + g[i][j];
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }

    cout << recur(0, 0);

    return 0;
}