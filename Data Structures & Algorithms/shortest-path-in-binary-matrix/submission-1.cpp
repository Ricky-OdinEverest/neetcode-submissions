class Solution {

public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int N = grid.size();
        if (grid[0][0] == 1 || grid[N - 1][N - 1] == 1) return -1;

        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, 
                                             {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

        vector<vector<bool>> visit(N, vector<bool>(N, false));

        queue<tuple<int, int, int>> q;
        q.push({0, 0, 1});
        visit[0][0] = true;

        while (!q.empty()) 
        {
            auto [r, c, length] = q.front();
            q.pop();
            // WHEN WE REACH THE END 
            if (r == N - 1 && c == N - 1) return length;
            // FOR THE VALUE IN DIRECTIONS
             for (auto [dr, dc] : directions) 
             {
                int nr = r + dr, nc = c + dc;
                
                // if inbounds and visit is not true
                if(nr >= 0 && nc >= 0 && nr < N && nc < N && 
                    grid[nr][nc] == 0 && !visit[nr][nc])
                    {
                     // THIS TUPLE IS PUSHED ON THE QUE WITH AN INCREMENTED LENGTH
                      q.push({nr, nc, length + 1});
                      // BOOL Vecor is set to true
                      visit[nr][nc] = true;
                    }
             }
        }
        return -1;
        
    }
};