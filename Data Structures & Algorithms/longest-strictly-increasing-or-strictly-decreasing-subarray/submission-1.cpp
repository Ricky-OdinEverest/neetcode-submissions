class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int maxLen = 1;
        int curLen = 1;

        int prevCompare = 0;
        int curCompare = 0;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i - 1])
            {
                curCompare = 0;
                prevCompare = curCompare;
                curLen == 1;
                continue;
            } 
            else if(nums[i] > nums[i - 1]) curCompare = 1;
            else if(nums[i] < nums[i - 1]) curCompare = -1;
            if(curLen == 1)
            {
                curLen++;
            }
            else if(curCompare == prevCompare)
            {
                curLen++;

            }
            else
            {
                curLen = 2;

            }
            prevCompare = curCompare;
            maxLen = max(maxLen, curLen);

        }

        return maxLen;
        
    }
};