class Solution {
public:
    void sortColors(vector<int>& nums) {

        int counts[3] = {0,0,0};
        for(int num : nums)
        {
            counts[num]++;

        }

        int i = 0;

        for(int n = 0; n < 3; n++)
        {
            for(int j = 0; j < counts[n]; j++)
            {
                nums[i] = n;
                i++;
            }
        }
        
    }
};