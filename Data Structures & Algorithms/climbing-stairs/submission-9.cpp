class Solution {
public:
    int climbStairs(int n) {

        vector<int> dp(n + 3);
        
        dp[1] = 1;
        dp[2] = 2;
        int res = 0;
        if(n < 3) return dp[n];
        for(int i = 3; i <= n; i++)
        {
          dp[i] = dp[i - 1] + dp[i - 2];

          res = dp[i];
        }
        return res;
    }
};
