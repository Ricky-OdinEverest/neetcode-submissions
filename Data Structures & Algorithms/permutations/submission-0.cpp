class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> permute(vector<int>& nums) {


        backtrack(0,nums);
        return res;
        
    }

    void backtrack(int i, vector<int> & nums)
    {
        if(i >= nums.size())
        {
            res.push_back(nums);
            return;
        } 

        for(int j = i; j < nums.size(); j++)
        {
            swap(nums[j], nums[i]);
            backtrack(i + 1, nums);
            swap(nums[j], nums[i]);
        }

    }
};
