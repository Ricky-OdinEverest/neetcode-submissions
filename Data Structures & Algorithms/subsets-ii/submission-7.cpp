class Solution {
public:
    vector<int> subset;
    vector<vector<int>> res;
    vector<vector<int>> fin;

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(),nums.end()); 
            backtrack(nums, 0, subset, res);
            return res;
    }


        void backtrack(vector<int> & nums, int i,  vector<int>& subset, vector<vector<int>>& res)
    {
       
       // {
     //    if(subset.size() >= i && nums[i] == subset[i])
           
       // }
        if(i >= nums.size())
        {
            res.push_back(subset);
            return;
        }   


        subset.push_back(nums[i]);
        backtrack(nums, i + 1, subset, res);
        subset.pop_back();

        while(nums[i] == nums[i + 1] && i < nums.size())
        i++;
        backtrack(nums, i + 1, subset, res);    

    }
};
