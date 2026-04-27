class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int R = 0; 
        int n = nums.size();
        while(R < n)
        {
            if(nums[R] == val)
            {
               nums[R] = nums[--n];
            }
            else
            {

                R++;
            }
        }
        return n;
    }
};