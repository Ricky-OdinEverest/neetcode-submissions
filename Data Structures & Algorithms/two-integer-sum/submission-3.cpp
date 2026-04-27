class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //Declare hash a map  using unordered map
        // the key is the number in quesitn and the value is the index
        unordered_map<int, int> targetMap;

        // loop over the input vector
        for(int i = 0 ; i < nums.size(); i++)
        {
            // initialize and define diff as the target value - the current value at index i
           
            int diff = target - nums[i];
             // i = 0 will not be in the list skipping the first check
             // use .find to see if the key diff is in the map.
             // if not it will match the value produced by .end()
            if(targetMap.find(diff) != targetMap.end())
            {
                //return the value at key diff and the current iteratin i as an vector
                return{targetMap[diff], i};
           
             }
             //insert value and key i
              targetMap.insert({nums[i], i});
     
    }
       return{};
    }
};
