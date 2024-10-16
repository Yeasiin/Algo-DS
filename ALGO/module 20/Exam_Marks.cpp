#include <bits/stdc++.h>

using namespace std;

bool knapsack(int n, int arr[], vector<vector<int>> &dp, int w)
{

    if (n == 0)
    {
        if (w == 0)
            return true;
        return false;
    }

    if (dp[n][w] != -1)
        return dp[n][w];

    if (arr[n - 1] <= w)
    {
        int op1 = knapsack(n - 1, arr, dp, w - arr[n - 1]);
        int op2 = knapsack(n - 1, arr, dp, w);

        return dp[n][w] = op1 || op2;
    }
    else
    {
        int op2 = knapsack(n - 1, arr, dp, w);
        return dp[n][w] = op2;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int diff = 1000 - m;

        if (diff == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<vector<int>> dp(n + 5, vector<int>(diff + 5, -1));

        if (knapsack(n, arr, dp, diff))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}