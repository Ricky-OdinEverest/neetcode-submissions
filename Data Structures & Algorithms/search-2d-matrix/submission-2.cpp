class Solution {
public:
    pair<int, int> calcMidIndex(pair<int, int> inPairL, pair<int, int> inPairR, int inCols)
    {
        int indexL = inPairL.first * inCols + inPairL.second; 
        int indexR = inPairR.first * inCols + inPairR.second; 
        int indexM = indexL + (indexR - indexL) / 2;

        int row = indexM / inCols;  
        int col = indexM % inCols;
        return {row , col};
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();        
        int cols = matrix[0].size();  
         

        pair<int, int> l = {0,0};
        pair<int, int> r = {matrix.size() - 1, matrix[0].size() - 1};
        

        while((l.first * cols + l.second) <= (r.first * cols + r.second))
        {


            pair<int, int> m = calcMidIndex(l, r, cols);

            if(target == matrix[m.first][m.second]) return true;

            else if(target < matrix[m.first][m.second])
            {
                if((m.second - 1 )< 0 )
                {
                     r = {m.first - 1, matrix[0].size() - 1};
                }
                else
                {
                      r = {m.first, m.second - 1};
                }
               
              
                
            }
            else
            {
                if((m.second + 1 )> (matrix[0].size() - 1) )
                {
                    l = {m.first + 1, 0};
                }
                else
                {
                     l = {m.first, m.second + 1};
                }
                 
               
            }
          
        }

        return false;
    }
};
