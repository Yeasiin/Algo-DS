#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool check_sum(int n, int target, vector<int> &nums, vector<vector<int>> &dp)
    {

        if (n == 0)
        {
            if (target == 0)
                return true;
            return false;
        }

        if (dp[n][target] != -1)
            return dp[n][target];

        if (nums[n - 1] <= target)
        {
            int op1 = check_sum(n - 1, target - nums[n - 1], nums, dp);
            int op2 = check_sum(n - 1, target, nums, dp);
            return dp[n][target] = op1 || op2;
        }
        else
        {
            return dp[n][target] = check_sum(n - 1, target, nums, dp);
        }
    }

    bool canPartition(vector<int> &nums)
    {

        int n = nums.size();
        long long total = 0;

        for (int v : nums)
        {
            total += v;
        }

        if (total % 2 == 1)
            return false;
        long long sum = total / 2;

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

        // long long dp[n+1][sum+1];

        check_sum(n, sum, nums, dp);

        // dp[0][0] = true;
        // for(int i=1;i<=sum;i++) dp[0][i]=false;
        // for(int i=1;i<= n;i++){
        //     for(int j=0;j<=sum;j++){
        //         if(nums[i-1]<=j){
        //             int op1 = dp[i-1][j-nums[i-1]];
        //             int op2 = dp[i-1][j];
        //             dp[i][j] = op1|| op2;
        //         }else{
        //             dp[i][j] =  dp[i-1][j];
        //         }
        //     }
        // }

        return dp[n][sum];
    }
};