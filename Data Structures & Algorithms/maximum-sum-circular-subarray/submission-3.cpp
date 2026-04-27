class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int globMax = nums[0], globMin = nums[0];
        int total = 0, curMax = 0, curMin = 0;

        for(int & num : nums)
        {
            // is the prefix contributing to a greater val

            // track max and min subarry
            // current iter
            curMax = max(curMax + num , num);
            curMin = min(curMin + num, num);

            //track total val of array
            total += num;

            // highest and lowest for the whole run
            globMax = max(globMax, curMax);
            globMin = min(curMin , globMin);
        }

        // in a circular array, if the greatest subarry is greater than 0;
        // is either the largest sub array, or every value - the min sub array

        //if the greatest subarray is negative then we just need the highest int

        return globMax > 0 ? max(globMax, total - globMin) : globMax;
        
    }
};