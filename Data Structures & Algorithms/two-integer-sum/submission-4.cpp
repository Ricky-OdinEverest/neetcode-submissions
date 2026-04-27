class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int diff;
        unordered_map<int,int> numsToIndex;

        for(int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if(numsToIndex.find(diff) != numsToIndex.end() )
            {
                return {numsToIndex[diff], i };
            }
            numsToIndex.insert({nums[i], i });
        }
        return {};
    }
};
