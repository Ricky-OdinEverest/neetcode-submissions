class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

    bool bDuplicate = false;

      
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) {
                    bDuplicate = true;
                    return bDuplicate;
                }
            }
        }
        return bDuplicate;
    }
};
