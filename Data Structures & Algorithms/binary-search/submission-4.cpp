class Solution {
public:
    int search(vector<int>& nums, int target) {

        int L = 0;
        int R = nums.size();

        

        while(L <= R)
        {
            int M = L + (R - L) / 2;
            if(nums[M] == target)
            {
              return M;
            }
            else if(nums[M] > target)
            {
                R = M - 1; 
            }
            else
            {
                L = M + 1; 
            }
        }

        return -1;
    }
};
