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

             res = max(res,
             max(abs(lastMax - arrays[i][0]),
              abs(arrays[i][n - 1] - lastMin)));

              lastMax = arrays[i][n - 1];
              lastMin = arrays[i][0];
        }
        
        return res;
    }
};
