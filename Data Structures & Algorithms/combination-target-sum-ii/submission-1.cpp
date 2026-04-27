class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        dfs(0, {}, 0, candidates, target);

        for(int i = 0; i < res.size(); i++)
        {
            for(int j = i + 1; j < res.size(); j++)
            {
                if(res[i] == res[j])
                {
                    res.erase(res.begin() + j);
                }
            }
        }
        return res;
    }

    void dfs(int i, vector<int> cur, int total, vector<int>& candidates, int target) {

        if(total == target){
            if(!res.empty() && cur == res[res.size() - 1])
            {
                return;
            }
            res.push_back(cur);
            return;
        }

        for(int j = i; j < candidates.size(); j++)
        {
            if(total + candidates[j] > target)
            {
                return;
            }
            cur.push_back(candidates[j]);
            dfs(j + 1, cur, total + candidates[j], candidates, target);
            cur.pop_back();
        }
    }
};
