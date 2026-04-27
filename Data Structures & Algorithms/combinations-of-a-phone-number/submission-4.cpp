class Solution {
public:
    vector<string> res;
    string combo = "";

    unordered_map<char, vector<char>> phoneMap
    {
        {'2',{'a','b','c'}},
        {'3',{'d','e','f'}},
        {'4',{'g','h','i'}},
        {'5',{'j','k','l'}},
        {'6',{'m','n','o'}},
        {'7',{'p','q','r','s'}},
        {'8',{'t','u','v'}},
        {'9',{'w','x','y','z'}}
    };

    vector<string> letterCombinations(string digits) 
    {
        if(digits.length() < 1) return {};
        int num = 0;
        for(int i = 0; i < digits.size(); i++)
        {
            num = max(num, (int)phoneMap[digits[i]].size());
        }
        
        backtrack(0,0, combo, digits,num);
        return res;

    }

    void backtrack(int i, int j, string& combo, string& digits, int num)
    {
        if(combo.size() >= digits.length())
        {
            res.push_back(combo);
            return;
        } 

        for(int j = 0; j < num; j++)
        {
        
        if(j < phoneMap[digits[i]].size())
        {
            combo += phoneMap[digits[i]][j];
            backtrack(i + 1, j, combo, digits, num);
            combo.pop_back();
        }

        }
         
    }
};
