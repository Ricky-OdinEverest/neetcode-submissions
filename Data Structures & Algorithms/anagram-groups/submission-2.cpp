class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> groupAnagrams;

        for(auto const& s: strs)
        {
            vector<int> counts(26, 0);

            for(auto const& c: s)
            {
                counts[c - 'a']++;
            }

            string key = to_string(counts[0]);

            for(int i = 1; i < 26; i++)
            {
                key += '.' + to_string(counts[i]);
            }

            groupAnagrams[key].push_back(s);

        }

        vector<vector<string>> result;
        for(auto pair : groupAnagrams)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};
