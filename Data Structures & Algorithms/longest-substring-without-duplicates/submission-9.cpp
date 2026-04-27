class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int L = 0;
        int res = 0;
        unordered_set<char> charSet;
        for(int R = 0; R < s.size(); R++)
        {
            // if R is in the set
            //Then this is a repeat character.
            // Now the L pointer need to be placed just after the first instance of this character
            while(charSet.find(s[R]) != charSet.end())
            {
                // erase the character by the L pointer
                // Shrink the window from the left
                charSet.erase(s[L]);
                L++;
            }
            charSet.insert(s[R]);

            res = max(res, (R - L + 1));
        }

        return res;
        
    }
};
