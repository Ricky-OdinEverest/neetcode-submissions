class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        if(nums.size() <= 1) return false;

        unordered_set<int> dupeChecker;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            if(dupeChecker.count(nums[i]) == 0)
            {
                dupeChecker.insert(nums[i]);
            }
            else if(dupeChecker.count(nums[i]) != 0)
            {
                return true;
            }
        }
    return false;

    }
};