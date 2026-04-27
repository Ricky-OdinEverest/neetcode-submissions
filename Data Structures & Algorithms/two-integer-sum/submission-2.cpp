class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> targetMap;

        for(int i = 0 ; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if(targetMap.find(diff) != targetMap.end())
            {
                return{targetMap[diff], i};
           
             }
              targetMap.insert({nums[i], i});
     
    }
       return{};
    }
};
