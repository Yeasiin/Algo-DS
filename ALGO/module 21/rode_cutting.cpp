#include <bits/stdc++.h>

using namespace std;

int dp[105][105];

int unbounded_knapsack(int n, int s, int wei[], int val[])
{

    if (n == 0 || s == 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (wei[n - 1] <= s)
    {
        int op1 = unbounded_knapsack(n, s - wei[n - 1], wei, val) + val[n - 1];
        int op2 = unbounded_knapsack(n - 1, s, wei, val);
        return dp[n][s] = max(op1, op2);
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n - 1, s, wei, val);
    }
}

int main()
{

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    int val[n];
    int wei[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        wei[i] = i + 1;
    }

    cout << unbounded_knapsack(n, n, wei, val);

    return 0;
}