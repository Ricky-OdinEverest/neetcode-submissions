class Solution {
public:
    vector<int> subset;
    vector<vector<int>> res;
    vector<vector<int>> fin;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
                
            backtrack(nums, 0, subset, res);
            sort(res.begin(),res.end());
            fin.push_back({});
            for(int i = 1; i < res.size(); i++)
            {
                if(res[i] == res[i - 1])
                {
                    continue;
                }
                fin.push_back(res[i]);
            }
            return fin;
    }


        void backtrack(vector<int> & nums, int i,  vector<int>& subset, vector<vector<int>>& res)
    {
        if(i >= nums.size())
        {
            vector<int> subSort(subset.begin(), subset.end());
            sort(subSort.begin(), subSort.end());
            res.push_back(subSort);
            return;
        }   
        
        backtrack(nums, i + 1, subset, res);
        subset.push_back(nums[i]);
        backtrack(nums, i + 1, subset, res);
        subset.pop_back();

    }
};
