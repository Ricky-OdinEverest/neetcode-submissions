class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int L = 0;
        int longestWindow = 0;
        unordered_set<char> uSet;

        for(int R = 0; R < s.size(); R++)
        {
            while(uSet.find(s[R]) != uSet.end())
            {
                uSet.erase(s[L]);
                L++;
            }
            uSet.insert(s[R]);
            int curWindow = R - L + 1;
            longestWindow = max(curWindow, longestWindow);
        }

        return longestWindow;
    }
};
