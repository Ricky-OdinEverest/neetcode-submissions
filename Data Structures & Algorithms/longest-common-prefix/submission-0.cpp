class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res = strs[0];
        int size = strs[0].size();
        
        int newSize = 0;
        for(int i = 1; i < strs.size(); i++)
        {
            for(int s = 0; s < size; s++)
            {
                if(strs[i][s] == res[s])
                {
                    newSize++;
                }
                else
                {
                    size = s;
                }

            }

        }

        return res.substr(0, size);
        
    }
};