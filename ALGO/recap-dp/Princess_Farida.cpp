#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int N = 1005;
int n;
int g[N];

ll dp[N];

ll recur(ll i)
{

    if (dp[i] != -1)
    {
        return dp[i];
    }

    if (i >= n)
    {
        return 0;
    }

    ll op1 = recur(i + 2);
    ll op2 = recur(i + 3);

    return dp[i] = max(op1, op2) + g[i];
}

int main()
{
    int t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {

        n = 0;
        cin >> n;

        memset(g, -1, sizeof(g));
        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        ll op1 = recur(0);
        ll op2 = recur(1);

        cout << "Case " << k << ": " << max(op1, op2) << endl;
    }
    return 0;
}