class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int L = 0;
        for(int R = 1; R < nums.size(); R++)
        {
            if(nums[L++] == nums[R]) return true;
        }
        
        return false;
    }
};