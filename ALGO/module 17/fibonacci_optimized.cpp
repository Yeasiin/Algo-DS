#include <bits/stdc++.h>

using namespace std;

const int N = 1e8;
long long int dp[N];

long long fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    long long ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
}

int main()
{

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}