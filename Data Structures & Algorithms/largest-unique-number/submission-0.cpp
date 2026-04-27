class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            if(hasDuplicate(nums, nums[i])) return nums[i];
        }
        return -1;
        
    }


    bool hasDuplicate(vector<int>& nums, int num) {

        int count = 0;
       
        for(int R = 0; R < nums.size(); R++)
        {
            if(num == nums[R]) count++;
        }
        
        return count == 1;
    }
};
