#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int diff;
    cin >> diff;

    int dp[n + 1][diff + 1];

    dp[0][0] = 0;

    for (int i = 1; i <= diff; i++)
    {
        dp[0][i] = INT_MAX - 5;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= diff; j++)
        {

            if (arr[i - 1] <= j)
            {
                int op1 = dp[i][j - arr[i - 1]] + 1;
                int op2 = dp[i - 1][j];
                dp[i][j] = min(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][diff];

    return 0;
}