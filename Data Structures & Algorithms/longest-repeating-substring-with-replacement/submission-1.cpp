class Solution {
public:
    int characterReplacement(string s, int k) {

        //longest string
        int res = 0;

        //set that holds unique characters of the string s;
        unordered_set<char> charSet(s.begin(), s.end());

        // Window length - count = num needed replacement

        // for every unique letter in s track the count within a window starting at index 0
        for(char c : charSet)
        {
            int count = 0;
            int L = 0;
            //check the count of every unique letter
            // For every window starting at L and endind at R
            for(int R = 0; R < s.size(); R++)
            {
                if(s[R] == c)
                {
                    count++;
                }
            
            // while the number of replacement needed for a contiguous string is greater than k
            while((R - L + 1) - count > k) 
            {
                // if the window is too big check the current letter
                // if we have a match we know we shrink the window and decrement the count
                if(s[L] == c)
                {
                    count--;
                }
                L++;
            }
            //once we find a window that valid we compare it to the current max
            res = std::max(res, R - L + 1);
            }
        }


        return res;
        

         
        
    }
};
