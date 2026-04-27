class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curSum = 0;
        int maxSum = nums[0];

        int lastNum = 0;

        for(int i = 0; i < nums.size(); i++)
        {

            if((curSum) > -1)
            {
                curSum += nums[i];
            }
            else
            {
                curSum = 0;
                curSum = nums[i];
            }

            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }

    
};
