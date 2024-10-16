#include <bits/stdc++.h>

using namespace std;

int grid[15][15];

int n, m;

int recu(int i, int j)
{
    if (i == n - 1 && j == m - 1)
    {
        return grid[i][j];
    }

    if (i >= n || j >= m)
    {
        return INT_MIN;
    }

    int op1 = recu(i + 1, j);
    int op2 = recu(i, j + 1);

    return max(op1, op2) + grid[i][j];
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    cout << recu(0, 0) << endl;

    return 0;
}