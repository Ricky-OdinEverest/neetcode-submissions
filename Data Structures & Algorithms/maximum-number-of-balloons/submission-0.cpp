class Solution {
public:
    int maxNumberOfBalloons(string text) {

        int count = 0;
        unordered_map<char, int> bMap
        {
            {'b', 0},
            {'a', 0},
            {'l', 0},
            {'o', 0},
            {'n', 0}
        };


        for( char c : text)
        {
            if(bMap.find(c) != bMap.end())
            {
                bMap[c]++;
            }
            
        }

        count = bMap['b'];
        if(bMap['a'] < bMap['b']) count = bMap['a'];

        if(bMap['l'] / 2 < bMap['a']) count = bMap['l'] / 2;

        if(bMap['o'] / 2 < bMap['l'] / 2) count = bMap['o'] / 2;

        if(bMap['n'] < bMap['o'] / 2) count = bMap['n'];

        return count;
    }
};