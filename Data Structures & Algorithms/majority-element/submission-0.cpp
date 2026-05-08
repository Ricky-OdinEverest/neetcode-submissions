class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int big = 0;
        int bigNum = 0;
        unordered_map<int,int> mp;

        for(int num : nums)
        {
            mp[num]++;
            big = max(big, mp[num] );
            if(mp[num] == big)
            {
                bigNum = num;
            }
        }

        return bigNum;
    }
};