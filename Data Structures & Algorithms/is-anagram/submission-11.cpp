class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();

        if(sSize != tSize) return false;

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        
        for(int i = 0; i < sSize; i++)
        {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        
         return sMap == tMap;
    }
};
