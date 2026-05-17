class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        vector<int> sumLeft;

        int leftSum = 0;

        for (int num : nums) {
            leftSum += num;
            sumLeft.push_back(leftSum);
        }

        for(int i = 0; i < nums.size(); i++)
        {
            
          
            if(sumLeft[i - 1] == sumLeft[nums.size() - 1] - sumLeft[i]) return i;
            
        }

        return -1;

        
    }
};