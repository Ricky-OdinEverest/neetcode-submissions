class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int> charCount;
        int res = 0;
        int L = 0;
        int mostFrequent = 0;

        for(int R = 0; R < s.size(); R++)
        {
            charCount[s[R]]++;

            mostFrequent = max(mostFrequent, charCount[s[R]]);

            int window = R - L + 1;
            int lettersNeeded = window - mostFrequent;
            int replacementsAvailable = k;

            while(lettersNeeded > replacementsAvailable)
            {
                charCount[s[L]]--;
                L++;
                window = R - L + 1;
                lettersNeeded = window - mostFrequent;
                replacementsAvailable = k;
            }
            res = max(res, window);
        }


        return res;
    }
};
