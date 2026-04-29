class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        
        

        int newRows = mat1.size();
        int newCols = mat2[0].size();
        int mult = max(newRows, newCols);
        vector<vector<int>> res(newRows, vector<int>(newCols, 0));
        for(int r = 0; r < newRows; r++ )
        {
            for(int c = 0; c < newCols; c++)
            {
                for(int i = 0; i < mat1[0].size(); i++ )
                {
                    res[r][c] += mat1[r][i] * mat2[i][c];
                }
                 
            }
        }

        return res;
    }

    
};


