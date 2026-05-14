class Solution {
public:
    bool canPermutePalindrome(string s) {

        unordered_map <char, int> count;

        for(auto c : s)
        {
            count[c]++;
        }

        int oddCount = 0;
        int evenCount = 0;

        for(auto p : count)
        {
            if(p.second % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        if(evenCount < 1 && oddCount == 1)
        {
            return true;
        }
        else if(evenCount >= 1 && oddCount <= 1)
        {
            return true;
        }
        
       return false;
        
    }
};
