class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {

        int res = 0;
        int n = arrays[0].size();
        int min_val = arrays[0][0];
        int max_val = arrays[0][arrays[0].size() - 1];

        for (int i = 1; i < arrays.size(); i++) 
        {
            n = arrays[i].size();
           res = std::max(res, std::max(std::abs(arrays[i][n - 1] - min_val), 
                                         std::abs(max_val - arrays[i][0])));

        min_val = std::min(min_val, arrays[i][0]);
            max_val = std::max(max_val, arrays[i][n - 1]);
        }
        return res;

        
    }
};
