class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> coolSet;

        for(int i = 0; i < nums.size(); i++)
        {
            if(coolSet.find(nums[i]) == coolSet.end())
            {
                coolSet.insert(nums[i]);
            }
            else
            {
                return true;
            }
        }

        return false;
        
    }
};