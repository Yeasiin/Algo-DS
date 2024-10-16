#include <bits/stdc++.h>

using namespace std;

int dp[105][105];

int lcs(int as, string a, int bs, string b)
{
    if (as == 0 || bs == 0)
    {
        return 0;
    }

    if (dp[as][bs] != -1)
        return dp[as][bs];

    if (a[as - 1] == b[bs - 1])
    {
        return dp[as][bs] = lcs(as - 1, a, bs - 1, b) + 1;
    }
    else
    {

        int op1 = lcs(as - 1, a, bs, b);
        int op2 = lcs(as, a, bs - 1, b);
        return dp[as][bs] = max(op1, op2);
    }
}

int main()
{

    memset(dp, -1, sizeof(dp));

    string a, b;

    cin >> a >> b;

    cout << lcs(a.size(), a, b.size(), b);

    return 0;
}