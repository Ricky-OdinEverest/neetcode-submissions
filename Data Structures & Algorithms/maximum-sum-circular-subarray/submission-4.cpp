class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        //in order to avoid going through the array more than once
        // we take the largest sub array and subtract the rest

        int curMin = 0;
        int totMin = nums[0];
        int curMax = 0;
        int resMax = nums[0];
        int tot = 0;

        for(int& num : nums)
        {
            curMax = max(curMax + num, num);
            curMin = min(curMin + num, num);
            tot += num;
            resMax = max(resMax, curMax);
            totMin = min(totMin, curMin);

        }
        
        return resMax > 0 ? max(resMax, tot - totMin) : resMax;
    }
};