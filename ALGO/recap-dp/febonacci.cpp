#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

const ll N = 1e5;
ll dp[N];

ll fibonacci(ll n)
{

    if (n <= 1)
    {
        return dp[n] = n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    ll op1 = fibonacci(n - 1);
    ll op2 = fibonacci(n - 2);

    return dp[n] = op1 + op2;
}

int main()
{

    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}