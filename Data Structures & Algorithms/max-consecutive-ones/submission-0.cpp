class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int res = 0;
        int cur = 0;

        for(int num : nums)
        {
            if(num == 1)
            {
                cur += 1;
                res = max(res, cur);
            }
            else
            {
                cur = 0;
            }
        }

        return res;
        
    }
};