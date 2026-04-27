class Solution {
public:
    int appendCharacters(string s, string t) {
        int L = 0, R = 0;
        // while pointers are in both strings
        while(L < s.size() && R < t.size())
        {
            // if pointer values are == increment them boht
           if (s[L] == t[R]) {
                L++;
                R++;
                // other check for the next matching substring in the Left pointer
            } else {
                L++;
            } 
        }
        //return the total size of the string - the sequence size that already exists in the string
        return t.size() - R;
        
    }
};