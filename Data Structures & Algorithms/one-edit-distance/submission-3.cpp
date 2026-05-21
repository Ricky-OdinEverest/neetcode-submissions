class Solution {
public:
    bool isOneEditDistance(string s, string t) {

        

        if(s == t) return false;
        
        int sl = s.length();
        int tl = t.length();

        if(abs(sl - tl) > 1) return false;
        int diff = 0;
        if(sl == tl)
        {
            for(int i = 0; i < sl; i++)
            {
                if(s[i] != t[i]) diff++;
                if(diff > 1) return false;
            }
        }
        else if(sl != tl)
        {
            for(int i = 0; i < min(sl , tl); i++)
            {
                if(diff == 1)
                {
                    if(sl < tl)
                    {
                        if(s[i - 1] != t[i]) return false;
                    }
                    else
                    {
                        if(s[i] != t[i - 1]) return false;
                    }
                }
                else
                {
                    if(s[i] != t[i]) diff++;
                    if(diff > 1) return false;
                }

            }
            if(diff  == 1 && (s[sl - 1] != t[tl - 1]) && max(tl, sl) > 1) return false;
        }



        return true;
    }

};
