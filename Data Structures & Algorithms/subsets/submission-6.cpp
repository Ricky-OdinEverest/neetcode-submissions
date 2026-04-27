class Solution {

    vector<vector<int>> res;
    vector<int> subset;

public:
    vector<vector<int>> subsets(vector<int>& nums) {
                backtrack(nums, 0, subset, res);
        return res;
    }


        void backtrack(vector<int> & nums, int i,  vector<int>& subset, vector<vector<int>>& res)
    {
        if(i >= nums.size())
        {
            res.push_back(subset);
            return;
        } 

  

            
        
        backtrack(nums, i + 1, subset, res);
        subset.push_back(nums[i]);
        backtrack(nums, i + 1, subset, res);
        subset.pop_back();

        

    }
};
