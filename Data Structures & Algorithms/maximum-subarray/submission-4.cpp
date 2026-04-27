class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = nums[0];
        int currSum = 0;
        int maxR = 0, maxL = 0, L = 0;

        for(int R = 0; R < nums.size(); R++)
        {
            if(currSum < 0)
            {
                L = R;
            }

            currSum = max(currSum, 0) + nums[R];
            maxSum = max(currSum, maxSum);

            
        }

        return maxSum;

    }
};
