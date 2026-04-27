class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> counts(3);
        for(int i = 0; i < nums.size(); i++)
        {
            counts[nums[i]]++;
        }
        
        int j = 0;
        for(int i = 0; i < 3; i++)
        {
            for(int k = 0; k < counts[i]; k++)
            {
                nums[j] = i;
                j++;
            }
        }
    
        
    }
};