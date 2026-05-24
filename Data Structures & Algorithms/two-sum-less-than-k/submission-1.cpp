class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
        int maxRES = INT_MIN;

 

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= k ) continue;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(j != i)
                {
                    int temp = nums[j] + nums[i];
                    if((temp) < k)
                    {
                        maxRES = max(maxRES, temp);
                    }
                }
            }
        }
        if(maxRES > INT_MIN) return maxRES;


        return -1;
        
    }
};
