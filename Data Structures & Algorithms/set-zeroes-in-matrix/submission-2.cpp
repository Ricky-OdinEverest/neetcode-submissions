class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        bool firstRowDirty =  markDirty(matrix);

        clearMarkedRC(matrix);

        clearIntersection(matrix);

        if(firstRowDirty)
        {
            clearRowZero(matrix);
        }
    }

    bool markDirty(vector<vector<int>>& matrix)
    {
        bool firstRowDirty = false;
        for(int r = 0; r < matrix.size(); r++)
        {
            for(int c = 0; c < matrix[0].size(); c++)
            {
                if(matrix[r][c] == 0)
                {
                    // always mark the column
                    matrix[0][c] = 0;
                    if (r > 0)
                    {
                        //mark cols w/first row
                        matrix[r][0] = 0;
                    } 
                    else 
                    {
                        firstRowDirty = true;
                    }                
                }
            }
        }

        return firstRowDirty;
    }

    void clearMarkedRC(vector<vector<int>>& matrix)
    {
       

        for (int r = 1; r < matrix.size(); r++)
        {
            for (int c = 1; c < matrix[0].size(); c++)
            {
                if (matrix[0][c] == 0 || matrix[r][0] == 0)
                {
                    matrix[r][c] = 0;
                }
            }
        }
    }

    void clearIntersection(vector<vector<int>>& matrix)
    {
        if (matrix[0][0] == 0)
        {
            for (int r = 0; r < matrix.size(); r++)
            {
                matrix[r][0] = 0;
            }
        }
    }

    void clearRowZero(vector<vector<int>>& matrix)
    {
        for (int c = 0; c < matrix[0].size(); c++)
        {
            matrix[0][c] = 0;
        }
    }

};
