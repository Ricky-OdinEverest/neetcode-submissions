class Solution {
public:

        
        // init traversal directions
        int directions[4][2] = {
            {1,0}, // right 
            {-1,0}, // left
            {0,1}, // down
            {0,-1} // up
            };



    int numIslands(vector<vector<char>>& grid) {

        // int grid size
        int ROW = grid.size();
        int COL = grid[0].size();
        int islands = 0;

        // Loop through grid

        for(int r = 0; r < ROW; r++)
        {
            for(int c = 0; c < COL; c++)
            {
                if(grid[r][c] == '1')
                {
                    bfs(grid, r, c);
                    islands ++;
                }
            }
        }
     return islands;
    }
    // The numIsland functions counts while this function finds adjacent pieces of the island
    void bfs(vector<vector<char>>& grid, int r, int c)
    {
        // BFS traverses points until it runs out of points in the que
        queue<pair<int, int>> q;
        // destroy island first so we don't look at it twice
        grid[r][c] = '0';

        // the push fuels the start of bfs
        q.push({r,c});

        while(!q.empty())
        {
            pair<int, int> node = q.front(); q.pop();
            // variables not functions
            int row = node.first, col = node.second;

            // in a tree bfs would travers every layer. Here
            // the directions are like the layers
            for(int i = 0; i < 4; i++)
            {
                // each loop we go right, left, down , or up from the current grid node
                // assume we are looking at grid[0][0];
                // on pass 1 nr = 1 and nc = 0
                // next nr = -1 and nc = 1
                // then the same is true for col
                int  nr = row + directions[i][0]; 
                int nc = col + directions[i][1];
                // if this is not the first point in the grid and neither point exedes the size
                // of the grid
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size())
                {
                    if(grid[nr][nc] == '1')
                    {
                        q.push({nr,nc});
                        grid[nr][nc] = '0';
                    }
                }

            }
        }
    }
};
