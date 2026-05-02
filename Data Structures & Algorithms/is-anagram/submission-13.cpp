class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;

        vector<int> tCount(26,0);
        vector<int> sCount(26,0);

        for(int i = 0; i < s.size(); i++)
        {
            int tChar = t[i] - 'a';  
            int sChar = s[i] - 'a';

            tCount[tChar]++;
            sCount[sChar]++;


        }

        return tCount == sCount;
        
    }
};
