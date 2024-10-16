#include <bits/stdc++.h>

using namespace std;

int n;
const int N = 1e5 + 5;
int dp[N];

bool recur(long long i)
{

    if (i == n)
    {
        return true;
    }
    if (i > n)
    {
        return false;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    bool op2 = recur(i * 2);
    bool op1 = recur(i + 3);

    return dp[i] = op1 || op2;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        n = 0;
        cin >> n;

        if (recur(1))
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