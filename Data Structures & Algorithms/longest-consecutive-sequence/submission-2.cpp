class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    unordered_set<int> numSet(nums.begin(), nums.end());

    int longest = 0;

    for(int num: numSet)
    {
        // begging of sequence found
        if(numSet.find(num - 1) == numSet.end())
        {
            int length = 1;
            //increase length until next sequence cannot be found
            while(numSet.find(num + length) != numSet.end())
            {
                length++;
            }
            longest = max(longest, length);
        }
    }
        return longest;
    }
};
