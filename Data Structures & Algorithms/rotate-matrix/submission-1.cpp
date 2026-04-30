class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();



                int n = matrix.size();
        for (int i = 0; i < n; ++i) {
        // We only iterate over the upper triangle
        for (int j = i + 1; j < n; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
        }
        for(int i = 0; i < rows; i++)
        {
            int L = 0;
            int R = cols - 1;
            while(L < R)
            {
                int temp = matrix[i][L];
                matrix[i][L] = matrix[i][R];
                matrix[i][R] = temp;
            
                L++;
                R--;

            }
           
        }



        
    }
};
