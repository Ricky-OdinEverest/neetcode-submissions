class Solution {
public:
    int calculateTime(string keyboard, string word) {

        int res = 0;

        unordered_map<char, int> letterMap;

        for(int i = 0; i < keyboard.length(); i++)
        {
            letterMap[keyboard[i]] = i;
        }

        int currLocation = 0;
        int prevLocation = 0;
        for(auto c : word)
        {
            currLocation = letterMap[c];

            res += abs(currLocation - prevLocation);

            prevLocation = currLocation;

        }
        
        return res;
    }
};
