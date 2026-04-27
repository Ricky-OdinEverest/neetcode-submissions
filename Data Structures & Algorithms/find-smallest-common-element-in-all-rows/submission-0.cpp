class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {

        int smallestPossible = mat[0][0];
        int largestPossible = mat[0][mat[0].size() - 1];
        int res = 0;

        int n = mat.size();

        for(int i = 1; i < n; i++)
        {
            int curSmall = mat[i][0];
            int curLarge = mat[i].size() - 1;

            smallestPossible = max(smallestPossible, curSmall);
            largestPossible = min(largestPossible, curLarge);

        }

        unordered_map<int, int> seen;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < mat[i].size(); j++)
            {
                //if(mat[i][j] >= smallestPossible && 
                //mat[i][j] <= largestPossible)
               // {
                    seen[mat[i][j]]++;
                    if(seen[mat[i][j]] == n)
                    {
                        res = mat[i][j];
                        return res;
                    } 
               // }

                
            }
             
        }
           
        return res;
        
    }
};
