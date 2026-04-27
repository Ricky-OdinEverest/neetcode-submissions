class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string , vector<string>> strMap;
        
        for(string str : strs)
        {
            vector<int> charCounts(26,0);
           
            for(auto c : str)
            {
                charCounts[c - 'a']++;
               
            }
            string key = "";
            for(auto c : charCounts)
            {
                  key += to_string(c) + ",";
            }
           strMap[key].push_back(str);

        }

        vector<vector<string>> res;
        for(auto pair : strMap)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
