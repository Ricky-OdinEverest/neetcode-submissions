class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> count;
        int res = 0;

        int L = 0, maxf = 0;

        for(int R = 0; R < s.size(); R++)
        {
            // what is the most frequent letter in this window
            count[s[R]]++;
            maxf = max(maxf, count[s[R]]);

            // there are not enough letters of the most frequent type in this window
            // decrement the count of the current letter and shrink the window
            while((R - L + 1) - maxf > k)
            {
                count[s[L]]--;
                L++;
            }
           // calc the longest valid window
            res = max(res, R - L + 1);
        }

        return res;
        
    }
};
