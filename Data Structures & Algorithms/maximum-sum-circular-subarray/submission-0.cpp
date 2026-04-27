class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int globMax = nums[0], globMin = nums[0];

        int curMax = 0, curMin = 0, total = 0;

        for (int& num : nums) {
            curMax = max(curMax + num, num);
            curMin = min(curMin + num, num);
            total += num;
            globMax = max(globMax, curMax);
            globMin = min(globMin, curMin);
        }
        //if globMax is greater than 0 
        //then max is either globMax or
        //total sum - the sum of globMin(numbers within min range)
        //else just the least negative 
        return globMax > 0 ? max(globMax, total - globMin) : globMax;
        
    }
};