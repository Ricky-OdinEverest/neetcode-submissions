class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        vector<pair<int, int>> directions = {{0, 1}, {1, 0},
                                             {0, -1}, {-1, 0}};
        // cast to int since size is an unsigned long
        // define how many moves remain in horizontal and vertical direction
        vector<int> steps = {static_cast<int>(matrix[0].size()), static_cast<int>(matrix.size()) - 1};

        // since c is added to in the first loop start at -1
        int r = 0, c = -1, d = 0;
        while (steps[d % 2]) {
            for (int i = 0; i < steps[d % 2]; i++) {
                r += directions[d].first;
                c += directions[d].second;
                res.push_back(matrix[r][c]);
            }
            //decrement current col or row
            steps[d % 2]--;
            // d wraps back to 4
            d = (d + 1) % 4;
        }
        return res;
    }
};