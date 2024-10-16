#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    bool dp[n + 1][total + 1];

    dp[0][0] = true;

    for (int i = 1; i <= total; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= total; j++)
        {

            if (arr[i - 1] <= j)
            {
                bool op1 = dp[i - 1][j - arr[i - 1]];
                bool op2 = dp[i - 1][j];

                dp[i][j] = op1 || op2;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    vector<int> v;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= total; j++)
        {
            if (dp[i][j] >= 1)
            {
                cout << dp[i][j] << " ";
            }
            else
            {
                cout << dp[i][j] << " ";
            }
            if (dp[i][j] == 1)
            {
                v.push_back(j);
            }
        }
        cout << endl;
    }

    int ans = INT_MAX;
    cout << endl;
    for (int e : v)
    {
        cout << e << " ";
    }
    for (int e : v)
    {
        int s1 = e;

        int s2 = total - s1;
        ans = min(ans, abs(s1 - s2));
    }

    cout << ans << endl;
    return 0;
}