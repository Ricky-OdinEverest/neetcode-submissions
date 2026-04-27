class Solution {
public:
    int characterReplacement(string s, int k) {
        //Try sliding window to assign longest
        int L = 0;
        int longest = 0;

        //within the window we need to know which character is the most frequent 
        // To avoid testing every character we can use a map
        unordered_map<char, int> charCount;
        int mostFreq = 0;

        for(int R = 0; R < s.size(); R++)
        {
            //increment count
            charCount[s[R]]++;
            //for each letter in this window check frequency
            mostFreq = max(mostFreq, charCount[s[R]]);
            //while replacements required is greater than k
            //our window is too big
            while((R - L + 1) - mostFreq > k)
            {
                charCount[s[L]]--;
                L++;

            }
            longest = max(longest, R - L + 1);


        }
        return longest;
    }
};
