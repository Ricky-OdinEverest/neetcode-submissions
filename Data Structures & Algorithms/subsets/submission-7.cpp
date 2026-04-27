class Solution {
public:
    vector<vector<int>> res;
    vector<int> subset;
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        backtrack(0, subset, nums);
        return res;        
    }

    void backtrack(int i , vector<int>& sub, vector<int>& nums)
    {
        if(i >= nums.size())
        {
            res.push_back(sub);
            return;
        } 

        backtrack(i + 1, sub, nums);
        sub.push_back(nums[i]);
        backtrack(i + 1, sub, nums);
        sub.pop_back();
    }
};
