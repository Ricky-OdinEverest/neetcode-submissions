class Solution {
public:
    int maxDifference(string s) {

        unordered_map<char, int> freq;
        int bigOdd = 0;
        int bigEven = 0;


        int littleOdd = INT_MAX;
        int littleEven = INT_MAX;

        for(char c : s)
        {
            freq[c]++;


        }

        for(auto j : freq)
        {
            if((j.second % 2) == 0)
            {
                bigEven = max(bigEven,j.second );
                littleEven = min(littleEven, j.second );
            }
            else
            {
                bigOdd = max(bigOdd,j.second );
                littleOdd = min(littleOdd, j.second );
            }
        }

    return max((bigOdd - littleEven), (littleOdd - bigEven));
    //return bigOdd - littleEven;
        
    }
};