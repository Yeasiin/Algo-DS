#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b;

    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    int maxInt = INT_MIN;
    int ni, nj;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {

            if (dp[i][j] > maxInt)
            {
                maxInt = dp[i][j];
                ni = i;
                nj = j;
            }
        }
    }

    cout << maxInt << endl;

    int i = ni;
    int j = nj;

    string ans;
    while (i != 0 && j != 0)
    {

        if (a[i - 1] == b[j - 1])
        {
            ans += a[i - 1];
            i--;
            j--;
        }
        else
        {
            break;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

    return 0;
}