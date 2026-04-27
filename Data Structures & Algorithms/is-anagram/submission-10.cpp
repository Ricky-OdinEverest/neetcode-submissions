class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if(sSize == tSize)
        {
            for(int i = 0; i < sSize; i++)
            {
                sMap[s[i]]++;
                tMap[t[i]]++;
            }
            if(sMap == tMap) return true;
        }
         return false;
    }
};
