class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

    unordered_set <int> sen;
    for(int i : nums)
    {
        if(sen.count(i)) return true;
        sen.insert(i);
    }
    return false;
    

    }
};
