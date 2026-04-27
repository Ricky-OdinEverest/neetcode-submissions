class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> checker;

        for(int i = 0; i < nums.size(); i++)
        {
            if(checker.find(nums[i]) != checker.end()) return true;
            
            checker.insert(nums[i]);
        }
        return false;
    }
};