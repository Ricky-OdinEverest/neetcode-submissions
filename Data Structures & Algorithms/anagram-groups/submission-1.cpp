class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // We need to group anagrams together in vectors to later be stored in another vector

        // Anagrams are words that have the same frequency of letter, example: mate, tame

        // In the east version of this problem we detect Anagrams by seeing if the count is equivalent

        // So we need a way to group anagrams by their equivilant character counts

        unordered_map<string, vector<string>> anagramGroups;

        // Process each String in strs to see we Hash group it will belong in

        // for each string in the original vector
        for(const auto& s:strs)
        {
            //Create a unique Identifier based on word count
            // Init a size 26 vector with all 0s. 26 letters start with 0 count
            // use parenthesis initialization to fill with 26 zeros
            vector<int> count(26,0);
            // For each character in the string
            //increment the char count if it exists
            for(char c : s){
                // subtracting a from the current char gives us a consistent map
                // whenever we hit a letter ++ will add to its count
                count[c - 'a']++;
            }
            // Convert the first count value to a string for our map
            string key = to_string(count[0]);
            // for each value in count after the first
            for(int i = 1; i < 26; i++)
            {
                // add a commadelimiter(not ptional) and a string
                // this will creat our full key of counts

                /*
Consider the word "abbbbbbbbbb" (one 'a', ten 'b's). Its character count is [1, 10, 0, 0, ...].

Consider the word "aaaaaaaaaaa" (eleven 'a's). Its character count is [11, 0, 0, 0, ...].
                */
                key += ',' +to_string(count[i]);
            }
            // the string being processed in the outer loop is pushed to the vector value at our newly
            //generated key
            anagramGroups[key].push_back(s);

        }
        // now we need to create our result vector
        vector<vector<string>> result;

        for(const auto& pair: anagramGroups){
            result.push_back(pair.second);
        }
        return result;
    }
};
