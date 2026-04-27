class Solution {
public:
    
    int climbStairs(int n) {


        return dfs(n);
        
    }

    int dfs(int n)
    {
        if(n <= 1)
        {
            return 1;
        }

        return (dfs(n - 1) + dfs(n - 2));
    }
};

