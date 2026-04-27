class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = nums[0];
        int currSum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
        // condensed line
        // assign cur sum to the value of nums i
        // + the max between 0 and its previous cached value
            currSum = nums[i] + max(currSum, 0);
            maxSum = max(currSum, maxSum);

        }

        return maxSum;
    }
};
