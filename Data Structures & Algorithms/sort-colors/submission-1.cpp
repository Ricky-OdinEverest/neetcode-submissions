class Solution {
public:
    void sortColors(vector<int>& nums) {

        vector<int>  tempNums{0,0,0};

        for(int i = 0; i < nums.size(); i++)
        {
            tempNums[nums[i]]++;
        }
        
        int j = 0;
        for(int i = 0; i < tempNums.size(); i++)
        {
            for(int k = 0; k < tempNums[i]; k++)
            {
                nums[j++] = i;
                
            }
        }

        
    }
};