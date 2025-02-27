#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

bool subset_solution(int n, int arr[], int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if (dp[n][s] != -1)
        return dp[n][s];

    if (arr[n - 1] <= s)
    {
        int op1 = subset_solution(n - 1, arr, s - arr[n - 1]);
        int op2 = subset_solution(n - 1, arr, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subset_solution(n - 1, arr, s);
    }
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;
    cin >> s;

    if (subset_solution(n, arr, s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}