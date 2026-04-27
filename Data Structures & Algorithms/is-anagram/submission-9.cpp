class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        
        unordered_map <char,int> sSet;
        unordered_map <char,int> tSet;

        for(int i = 0; i < s.size(); i++ )
        {
            sSet[s[i]]++;
            tSet[t[i]]++;
        }
        return sSet == tSet;
    }
};
