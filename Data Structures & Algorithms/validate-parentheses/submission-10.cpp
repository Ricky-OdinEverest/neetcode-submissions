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
        else if(!charStack.empty() && charStack.back() == parMap[c] )
        {
          
                charStack.pop_back();
            
  

        }
         else
            {
                return false;
            }
    }

    return charStack.empty();
        
    }
};
