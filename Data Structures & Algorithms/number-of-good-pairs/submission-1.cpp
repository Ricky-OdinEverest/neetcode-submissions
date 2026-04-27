class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int, int> pairs;
        int count = 0;

        for(int num : nums)
        {
            pairs[num]++;
        }

        for(auto thing : pairs)
        {
            int add;
            if(thing.second > 1)
            {
                add = thing.second * (thing.second - 1) / 2;
                count += add;
            }
           
        }
        
        return count;
    }
};