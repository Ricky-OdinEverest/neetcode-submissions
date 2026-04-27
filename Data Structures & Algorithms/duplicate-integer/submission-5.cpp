class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> dupe;

        for(int i = 0; i < nums.size(); i++)
        {
            if(dupe.find(nums[i]) != dupe.end())
            {
                return true;
            }
            else
            {

                 dupe.insert(nums[i]);
               
            }
        }

        return false;
        
    }
};