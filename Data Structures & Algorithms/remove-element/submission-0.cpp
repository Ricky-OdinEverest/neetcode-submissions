class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int l = 0;
        int r = 0;

        int n = nums.size();

        while(r < n)
        {
            while(r < n && nums[r] == val)
            {
                r++;
            }
            if(r >= n) return l;
            nums[l] = nums[r];
            l++;
            r++;
        }
        return l;
        
    }
};