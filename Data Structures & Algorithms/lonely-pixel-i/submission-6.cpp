class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        int bCount = 0;

        unordered_map<int, int> rCheck;
        unordered_map<int, int> cCheck;

        for(int r = 0; r < picture.size(); r++)
        {
            for(int c = 0; c < picture[0].size(); c++)
            {
                if(picture[r][c] == 'B')
                {
                   
                        rCheck[r]++;
                        cCheck[c]++;
                }
            }
        }




        for(int r = 0; r < picture.size(); r++)
        {
            for(int c = 0; c < picture[0].size(); c++)
            {
                if(picture[r][c] == 'B')
                {
                   
                        if(rCheck[r] == 1 && cCheck[c] == 1)
                        {
                            bCount++;
                        }
                        
                }
            }
        }

        return bCount;
    }
};
