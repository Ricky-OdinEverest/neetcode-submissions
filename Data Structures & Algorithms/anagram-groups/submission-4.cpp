class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

         unordered_map<string, vector<string>> res;

         //The final result must be a 2d vec of strings

         //each is an anagram 

         //a map can store the vectors needed as long as I can make a key

         //In order to efficiently make a key I nee to 

         for(auto s : strs)
         {
            //int vec with 20 slots valued at 0
            vector<int> count(26, 0);
            
            for(auto c : s)
            {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);

            for(int i = 1; i < 26; i++)
            {
                key += ',' + to_string(count[i]);
            }

            res[key].push_back(s);
         }

          vector<vector<string>> answer;

          for(auto pair : res)
          {
            answer.push_back(pair.second);
          }
        
        return answer;
    }
};
