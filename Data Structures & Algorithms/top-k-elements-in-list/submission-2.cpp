class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> countMap;

        vector<vector<int>>  freqVec(nums.size() + 1);

        for(int i = 0;  i < nums.size(); i++)
        {
            countMap[nums[i]]++;
        }

        for(auto freq : countMap)
        {
            freqVec[freq.second].push_back(freq.first);
        }

        vector<int> result;

        for(int i = freqVec.size() -1; i > 0; i--)
        {
            for(int n : freqVec[i])
            {
                result.push_back(n);
                if (result.size() == k)
                 {
                    return result;
                 }
           }
       }
       return result;
    }

};
