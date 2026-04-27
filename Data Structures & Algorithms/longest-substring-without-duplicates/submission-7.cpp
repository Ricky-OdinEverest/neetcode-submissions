class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() < 1) return 0;

        int maxSum = 1;
        int curSum = 1;

        int L = 0;
        int R = 1;

        map<char, int> unique;
 
        while(R < s.size())
        {
            unique.insert({ s[L], L });
           
            if(unique.count(s[R]))
            {
                if(s[R] == s[R - 1])
                {
                    L = R;
                }
                else
                {
                    L = max(L, unique[s[R]] + 1);
                }
                
                unique[s[R]] = R;
                
            }
            else
            {
                unique.insert({ s[R], R });
               
            }
             curSum = R - L + 1;
             maxSum = max(curSum, maxSum);

            R++;
        }

        return maxSum;
        
    }
};
