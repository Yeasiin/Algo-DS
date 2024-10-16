#include <bits/stdc++.h>
using namespace std;

// table way
class Solution
{
public:
    bool check_sum(int n, int target, vector<int> &arr, vector<vector<int>> &dp)
    {

        // base case
        if (n == 0)
        {
            if (target == 0)
                return true;
            else
                return false;
        }

        if (dp[n][target] != -1)
        {
            return dp[n][target];
        }

        if (arr[n - 1] <= target)
        {

            bool op1 = check_sum(n - 1, target, arr, dp);
            bool op2 = check_sum(n - 1, target - arr[n - 1], arr, dp);

            return dp[n][target] = op1 || op2;
        }
        else
        {

            return dp[n][target] = check_sum(n - 1, target, arr, dp);
        }
    }

    bool isSubsetSum(vector<int> arr, int sum)
    {
        // code here

        int n = arr.size();
        // vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        dp[0][0] = true;

        for (int i = 1; i <= sum; i++)
            dp[0][i] = false;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
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
                    ;
                }
            }
        }

        return dp[n][sum];
    }
};

// recursion way
class Solution
{
public:
    bool check_sum(int n, int target, vector<int> &arr, vector<vector<int>> &dp)
    {

        if (n == 0)
        {
            if (target == 0)
                return true;
            return false;
        }

        if (dp[n][target] != -1)
            return dp[n][target];

        if (arr[n - 1] <= target)
        {

            int op1 = check_sum(n - 1, target - arr[n - 1], arr, dp);
            int op2 = check_sum(n - 1, target, arr, dp);

            return dp[n][target] = op1 || op2;
        }
        else
        {
            return dp[n][target] = check_sum(n - 1, target, arr, dp);
        }
    }

    bool isSubsetSum(vector<int> arr, int sum)
    {
        // code here

        int n = arr.size();

        vector<vector<int>> dp(n + 5, vector<int>(sum + 5, -1));

        return check_sum(n, sum, arr, dp);
    }
};