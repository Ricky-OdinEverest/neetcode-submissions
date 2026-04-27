class Solution {
public:
    int appendCharacters(string s, string t) {
   int L = 0, R = 0;
        while(L < s.size() && R < t.size())
        {
           if (s[L] == t[R]) {
                L++;
                R++;
            } else {
                L++;
            } 
        }

        return t.size() - R;
        
    }
};