class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        if(nums.size() < 2) return true;

        int flipper = -1;

        for(int& num : nums)
        {
            int test = (num % 2 == 0) ? 0 : 1;

            if(test == flipper) return false;

            flipper = test;
        }

        return true;
        
    }
};