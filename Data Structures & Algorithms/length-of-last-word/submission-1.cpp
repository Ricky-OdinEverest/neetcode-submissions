class Solution {
public:
    int lengthOfLastWord(string s) {
        int L = 0;
        int R = 0;

        int resMax = 0;
        int curMax = 0;

        while(R < s.size() && L < s.size() )
        {
            
            if (isalpha(s[L]))
            {
                curMax = 0;
              
                while(isalpha(s[L]))
                {
                    curMax++;
                    L++;
                }
            
            } 
            //else if (isspace(s[L])) 
            //{
                L++;
                R = L;

            //}

            resMax = curMax;
        }

        return resMax;
        
    }
};