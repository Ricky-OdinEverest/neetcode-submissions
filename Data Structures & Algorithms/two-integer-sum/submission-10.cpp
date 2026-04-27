class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> dupeMap;
        
        for(int i = 0; i < nums.size(); i++)
        {

       

        int diff = target - nums[i];
           
        if(dupeMap.find(diff) != dupeMap.end() )
        {
            return {dupeMap.at(diff), i };
            // return {0, 1 };
        } 
// each pass through the loop, you only want to search among the numbers you have already seen
          dupeMap.insert({nums[i], i});


        }
        
    }
};
