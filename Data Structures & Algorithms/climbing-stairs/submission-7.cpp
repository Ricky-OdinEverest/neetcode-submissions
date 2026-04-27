class Solution {

    vector<int> cache;
public:
    int climbStairs(int n) {
        cache.resize(n, -1);

        if(n <= 2) return n;

        //dfs(n,0);

        // premake vec but is not pre inited like in dfs
        vector<int> dp(n + 1);
        // skipping 0 so we can align with stair count we start with the base case
        // There is only one option to go up one steps and two for two steps

        // 1
        dp[1] = 1;
        // (1,1), (2)
        dp[2] = 2;

        // since we start at one i need to be able to reach the top stair so i can == n

        for(int i = 3; i <= n; i++ )
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }


       return dp[n];
        
    }

    int dfs(int n, int i)
    {
        if(i >= n) return i == n;

        if(cache[i] != -1)
        {
            return cache[i];
        }

        return cache[i] = dfs(n, i + 1) + dfs(n, i + 2);
    }
};
