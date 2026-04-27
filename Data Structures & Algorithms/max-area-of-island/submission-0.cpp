class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int maxSize = 0;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int ROWS= grid.size();
        int COLS  = grid[0].size();

        int islands = 0;
        

        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            if(grid[i][j] == 1)
            {
                maxSize = max(bfs(grid,i,j) + 1, maxSize) ;
            }
        }

        return maxSize;
        
    }
        int bfs(vector<vector<int>>& grid, int r, int c)
    {
        int currSize = 0;
        queue<pair<int, int>> q;
        grid[r][c] = 0;
        q.push({r, c});

        while(!q.empty())
        {
            pair node = q.front(); q.pop();
            int row = node.first, col = node.second;

            for(int i = 0; i < 4; i++)
            {
                int nr = row + directions[i][0];
                int nc = col + directions[i][1];
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size()  && grid[nr][nc] == 1 )
                {
                    q.push({nr , nc});
                    grid[nr][nc] = 0;
                    currSize++;
                }
            }

            

        }
        return currSize;

    }
};
