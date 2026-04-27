class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> parMap =
    {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    vector<char> charStack;

    for(char c : s)
    {
        if(parMap.find(c) == parMap.end())
        {
            charStack.push_back(c);
        }
        else
        {
            if(charStack.size() == 0) return false;
            char checVal = charStack.back();

            if(checVal == parMap.find(c)->second)
            {
                charStack.pop_back();
            }
            else
            {
                return false;
            }

        }
    }
    if(charStack.size() != 0) return false;

    return true;
        
    }
};
