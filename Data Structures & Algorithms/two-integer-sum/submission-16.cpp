class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> nm;

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];

            if(nm.find(diff) != nm.end())
            {
                return{nm[diff], i};
            }
            else
            {
                nm[nums[i]] = i;
            }

        }
        return {};
    }
};
