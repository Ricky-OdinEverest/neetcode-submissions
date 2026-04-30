class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        vector<vector<int>> res;

        for(int c = 0; c < matrix[0].size(); c++)
        {
            vector<int> newRow;
            for(int r = matrix.size() - 1; r >= 0; r--)
            {
                newRow.push_back(matrix[r][c]);
            }
            res.push_back(newRow);
        }
        matrix = res;
        return;
    }
};
