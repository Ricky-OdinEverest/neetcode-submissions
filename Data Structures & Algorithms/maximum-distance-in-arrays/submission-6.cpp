class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {

        int n = arrays[0].size();
        int lastMax = arrays[0][arrays[0].size() -1];
        int lastMin =  arrays[0][0];
        int res = 0;

        for(int i = 1; i < arrays.size(); i++)
        {
            n = arrays[i].size();

            int currMax = arrays[i][n - 1];
            int currMin = arrays[i][0];

             res = max(res,
             max(abs(lastMax - currMin),
              abs(currMax - lastMin)));

              lastMax = max(currMax, lastMax );
              lastMin = max(currMin, lastMin);
        }
        
        return res;
    }
};
