class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //map of indices with number as the key
        unordered_map<int, int> numMap; 

        numMap.insert({nums[0], 0});

       

        for(int i = 1; i < nums.size(); i++)
        {

             int preMatch = target - nums[i];

             if(numMap.find(preMatch) != numMap.end())
             {
                return {numMap[preMatch], i};
             }
             else
             {
                numMap.insert({nums[i], i});
             }

        }

        return {};
        
    }
};
