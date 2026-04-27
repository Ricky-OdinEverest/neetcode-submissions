class Solution {
    vector<int> cache;
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size() - 1;

        cache.resize(n, -1);

        return min(dfs(cost, n, 0), dfs(cost, n, 1));
        
    }

    int dfs(vector<int>& cost, int n, int i)
    {
        if(i >= n + 1) return 0;

       // if(i == n) return cost[n];

        return cost[i] + min(dfs(cost, n, i + 1), dfs(cost, n, i + 2));

    }
};
