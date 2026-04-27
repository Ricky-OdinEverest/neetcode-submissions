class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> res;

        dp(res, 1, numRows);

        return res;
        
    }

    void dp(vector<vector<int>>& res, int curRow, int numRows)
    {
        if(curRow > numRows) return;

        if(curRow == 1)
        {
            res.push_back({1});
            dp(res, 2, numRows);
            return;
        }    

        if(curRow == 2)
        {
            res.push_back({1 , 1});
            dp(res, 3, numRows);
            return;
        } 

        vector<int> temp;
        for(int i = 0; i < curRow; i++)
        {
            if(i == 0)
            {
                temp.push_back(1);
            }
            else if(i == curRow - 1)
            {
                temp.push_back(1);
            }
            else
            {
                int newNum = res[curRow - 2][i - 1] + res[curRow - 2][i];
                 temp.push_back(newNum);
            }
        }

        res.push_back(temp);

        dp(res, curRow + 1, numRows);


    }
};