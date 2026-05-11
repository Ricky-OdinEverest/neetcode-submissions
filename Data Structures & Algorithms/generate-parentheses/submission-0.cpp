class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        backTrack(res, temp, n, 0, 0);
        return res;
    }

    void backTrack(vector<string>& result, string& temp, int n, int oC, int cC)
    {
        if(oC == cC && oC == n)
        {
            result.push_back(temp);
            return;
        }

        if(oC < n)
        {
             temp += '(';
            backTrack(result, temp, n, oC + 1, cC);
             temp.pop_back();
        }

        if(cC < oC)
        {
            temp += ')';
            backTrack(result, temp, n, oC, cC + 1);
            temp.pop_back();
        }
    }
};
