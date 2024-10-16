#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{

    int t;
    cin >> t;

    for (int te = 1; te <= t; te++)
    {
        n = 0;
        cin >> n;

        if (n == 0)
        {
            cout << "Case " << te << ": " << 0 << endl;
            continue;
        }

        long long arr[n];
        long long dp[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
        }

        cout << "Case " << te << ": " << dp[n - 1] << endl;
    }

    return 0;
}