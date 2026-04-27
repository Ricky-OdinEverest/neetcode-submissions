class Solution {
public:
    int scoreOfString(string s) {

        int score = 0;
        char cur = s[0];
        int diff = 0;
        for(int i = 1; i < s.size(); i++)
        {
            diff = abs(cur - s[i]);
            score += diff;

            cur = s[i];
            
        }
        
        return score;
    }
};