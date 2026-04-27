class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> numSet1(nums1.begin(), nums1.end());

        unordered_set<int> numSet2(nums2.begin(), nums2.end());

        vector<int> diff1, diff2;

        for(auto n1 : numSet1)
        {
            if(numSet2.find(n1) == numSet2.end())
            {
                diff1.push_back(n1);
            }
        }

        for(auto n2 : numSet2)
        {
            if(numSet1.find(n2) == numSet1.end())
            {
                diff2.push_back(n2);
            }
        }

        return {diff1, diff2};
        
    }
};