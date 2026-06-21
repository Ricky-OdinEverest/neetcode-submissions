class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a;
        int b;
        vector<int> res;
        unordered_set<int> s;

        int gridSum = 0;

        for(int r = 0; r < grid.size(); r++)
        {
            for(int c = 0; c < grid[0].size(); c++)
            {
                if(s.find(grid[r][c]) == s.end())
                {
                    s.insert(grid[r][c]);
                    gridSum += grid[r][c];

                }
                else
                {
                    res.push_back(grid[r][c]);
                }
                
            }
        }

        int gridSize = grid.size() * grid[0].size();
        int rangeAdd = (gridSize * (gridSize + 1)) / 2;

        b = rangeAdd - gridSum;

        res.push_back(b);


        return res;
        
    }
};