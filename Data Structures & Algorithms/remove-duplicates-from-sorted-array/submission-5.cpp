class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int k = 1;
        int i = 1;

        int n = nums.size();

        for(i; i < n; i++)
        {
            if(nums[i] != nums[i - 1])
            {
                nums[k++] = nums[i];
 
            }
        }
        return k;
    }
};