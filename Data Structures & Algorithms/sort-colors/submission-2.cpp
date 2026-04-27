class Solution {
public:
    void sortColors(vector<int>& nums) {

        vector<int> counts(nums.size() + 1);

        for(int i = 0; i < nums.size(); i++)
        {
            counts[nums[i]]++;
        }

        int c = 0;
        for(int j = 0; j < counts.size(); j++)
        {
            for(int k = 0; k < counts[j]; k++)
            {
                nums[c++] = j;
            }
        }


        
    }
};