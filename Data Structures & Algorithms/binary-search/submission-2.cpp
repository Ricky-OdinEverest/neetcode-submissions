class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        int m  = (r + l) / 2;

        while(l <= r)
        {
            if(target == nums[m]) return m;
            else if(target < nums[m])
            {
                r = m - 1;
                
            }
            else
            {
                l = m + 1;
            }
            m = (r + l) / 2;
        }

        return -1;
        
    }
};
