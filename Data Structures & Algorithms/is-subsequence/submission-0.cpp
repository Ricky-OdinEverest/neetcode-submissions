class Solution {
public:
    bool isSubsequence(string s, string t) {

        int S = s.size();
        int T = t.size();

        if(S > T) return false;
        if(S == T)
        {
            if(s == t) return true;
            else return false;
        }

        int L = 0;

        for(int R = 0; R < T; R++)
        {
            if(s[L] == t[R])
            {
                L++;
            }
    
        }

        return L == S;
        
    }
};