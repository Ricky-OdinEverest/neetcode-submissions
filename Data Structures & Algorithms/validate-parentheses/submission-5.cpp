class Solution {
public:
    bool isValid(string s) {

        unordered_map<char, char> pType = 
       {

        { ')' , '(' },
         { '}', '{' }, 
         { ']','['}
          };
        stack<char> checkChar;
        int size = s.size();

       for(char c : s)
       {
        if(pType.count(c))
        {
            if(!checkChar.empty() && checkChar.top() == pType[c])
            {
                checkChar.pop();
            }
            else
            {
                return false;
            }

        }
        else 
        {
            checkChar.push(c);
        }
       }


        return checkChar.empty();
        
    }
};
