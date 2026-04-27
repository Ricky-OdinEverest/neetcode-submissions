class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<pair<double, vector<int>>>> pq;
        
        for(auto point : points)
        {
            double distance = sqrt((point[0] * point[0]) + (point[1] * point[1]));

                pq.push({distance, point});
        }

        vector<vector<int>> res;

        for(int i = 0; i < k; i++)
        {
            vector<int> temp = pq.top().second;
            pq.pop();
            res.push_back(temp);
        }

        return res;
    }
};
