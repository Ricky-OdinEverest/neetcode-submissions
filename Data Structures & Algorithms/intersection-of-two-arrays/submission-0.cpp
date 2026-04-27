class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, bool> numTable;
        vector<int> res;

        for(int num : nums1)
        {
            numTable[num] = false;
        }
        

        for(int num : nums2)
        {
            if(numTable.find(num) != numTable.end())
            {
                if(numTable[num] == false)
                {
                  res.push_back(num);
                  numTable[num] = true;
                }
            }
        }

        return res;

    }
};