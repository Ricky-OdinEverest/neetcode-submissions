class Solution {
public:
    int directions[4][2] {{1,0},{-1,0},{0,1},{0,-1}};

    int numIslands(vector<vector<char>>& grid) {

        // I need to provide the number of islands in the provided 2D grid
        // an island is a contiguos group of 1s
        // a connection to be contiguos in valid in the up, rigt, left or down directions

        // I will need to go through every cell
        // When I find an island I should turn all 1s into 0s

        // helpers 
        // right, left, down, up
      

        int ROWS = grid.size();
        int COLS = grid[0].size();

        int islands = 0;

        for(int r = 0; r < ROWS; r++)
        {
            for(int c = 0; c < COLS; c++)
            {
                if(grid[r][c] == '1')
                {
                    bfs(grid, r, c);
                    islands++;
                }
            }
        }

        return islands;
        
    }

    // find all conntected 1s until the island is sunk
    void bfs(vector<vector<char>>& grid, int r, int c)
    {
        // FIFO dataStructure to keep track of where to visit next
        // this contains the coordinates of the land cells
        
        queue<pair<int, int>> q;
        // immedietly sink the starting cell that call the function
        // this marks it as visited so we don't loop over it later
        grid[r][c] = '0';
        // the island needs to be traversed from this startin point so we add it into the que
        // for consideration
        q.push({r,c});
    // typical BFS while loop using que
    while(!q.empty())
    {
        // in one line we asing the front node and remove it from our que
        auto node = q.front(); q.pop();
        // the node is no longer in the que but we have a copy of its cordinates in node
        // acting as a pointer
        // so we assign row to the first value and col to the second
        int row = node.first, col = node.second;

        // Now lets look in each direction from the directions array;
        for(int i = 0; i < 4; i++)
        {
            int nr = row + directions[i][0]; //neighbor row
            int nc = col + directions[i][1]; //neighbor col

            //int row = node.first, col = node.second;
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
