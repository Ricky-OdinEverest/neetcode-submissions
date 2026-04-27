class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // map count to number
      unordered_map<int,int> count;
        // vec must be one size larger than nums
      vector<vector<int>> freq(nums.size() + 1 );

        // map the value to the key which is the original number from nums vector
        for(auto num : nums)
        {
            count[num]++;
        }
        
        // push the number on to a vector of matching frequencies

        for(auto pair : count)
        {
            freq[pair.second].push_back(pair.first);
        }

        int c = 0;
        vector<int> res;
        for(int i = freq.size() - 1 ; i > 0; i--)
        {
            for(int j = 0; j < freq[i].size(); j++)
            {
                res.push_back(freq[i][j]);
                c++;
                if(res.size() == k)
                {
                    return res;
                }
            }
        }

        return res;

        
    }
    
};
