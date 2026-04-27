class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> numMap;
        vector<int> res;

        for(int i = 0; i < nums1.size(); i++)
        {
            numMap[nums2[i]] = i;
        }
    

        for(int i = 0; i < nums1.size(); i++)
        {
            if(numMap.find(nums1[i]) != numMap.end())
            {
                res.push_back(numMap[nums1[i]]);
                
            }
        }

        return res;
        
    }
};
