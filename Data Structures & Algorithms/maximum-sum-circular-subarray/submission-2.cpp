class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {


        int globMax = nums[0], globMin = nums[0];
        int curMax = 0, curMin = 0, total = 0;

        for(int& num : nums)
        {
            curMax = max(curMax + num, num);
            curMin = min(curMin + num, num);

            total += num;

            globMax = max(globMax, curMax);
            globMin = min(globMin, curMin);

        }
        // if everything is negative return the largest element. else
        // max is either the greatest sub or the total - the lowest subarray
        return globMax > 0 ? max(globMax, total - globMin) : globMax;


        
    }
};