class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> dupe;

        for(int num : nums)
        {
            if(dupe.find(num) != dupe.end()) return true;
            else
            {
                dupe.insert(num);
            }
        }

        return false;
        
    }
};