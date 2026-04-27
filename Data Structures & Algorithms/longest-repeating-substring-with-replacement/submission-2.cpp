class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> count;
        int res = 0;

        int L = 0, maxf = 0;

        for(int R = 0; R < s.size(); R++)
        {
            count[s[R]]++;
            maxf = max(maxf, count[s[R]]);

            while((R - L + 1) - maxf > k)
            {
                count[s[L]]--;
                L++;
            }

            res = max(res, R - L + 1);
        }

        return res;
        
    }
};
