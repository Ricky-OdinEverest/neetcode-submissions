class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        

        int w1 = -1;
        int w2 = -1;
        int dist = INT_MAX;

        for(int i = 0; i < wordsDict.size(); i++)
        {
            if(wordsDict[i] == word1)
            {
                w1 = i;
            }
            else if(wordsDict[i] == word2)
            {
                w2 = i;
            }
            if(w1 > -1 && w2 > -1)
            {
                dist = min(dist, abs(w1 - w2));
            }
        }

        return dist;
    }
};
