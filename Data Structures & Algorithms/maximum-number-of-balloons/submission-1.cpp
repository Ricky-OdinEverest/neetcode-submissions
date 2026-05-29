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

        bMap['l'] /= 2;
        bMap['o'] /= 2;
        return min({bMap['b'], bMap['a'], bMap['l'], bMap['o'], bMap['n']});

        return count;
    }
};