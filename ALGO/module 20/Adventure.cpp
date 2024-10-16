#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int dp[N][N];

int knapsack(int n, int wei[], int val[], int w)
{

    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (dp[n][w] != -1)
        return dp[n][w];

    if (wei[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, wei, val, w - wei[n - 1]) + val[n - 1];

        int op2 = knapsack(n - 1, wei, val, w);

        return dp[n][w] = max(op1, op2);
    }
    else
    {
        return dp[n][w] = knapsack(n - 1, wei, val, w);
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        int n, w;
        cin >> n >> w;

        int wei[n];
        int val[n];

        for (int i = 0; i < n; i++)
        {
            cin >> wei[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }

        cout << knapsack(n, wei, val, w) << endl;
    }

    return 0;
}