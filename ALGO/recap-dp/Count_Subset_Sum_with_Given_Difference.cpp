#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    int diff;
    cin >> diff;

    int to = (diff + s) / 2;

    cout << to << endl;

    int dp[n + 1][to + 1];

    dp[0][0] = 1;

    for (int i = 1; i <= to; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= to; j++)
        {
            if (arr[i - 1] <= j)
            {
                int op1 = dp[i - 1][j - arr[i - 1]];
                int op2 = dp[i - 1][j];
                dp[i][j] = op1 + op2;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= to; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << dp[n][diff];

    return 0;
}