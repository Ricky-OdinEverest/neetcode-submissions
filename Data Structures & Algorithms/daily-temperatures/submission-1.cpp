class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // stack to store iterators and number
        stack<pair<int, int>> iStack;

        int n = temperatures.size();

        vector<int> res(n, 0);

        // In one pass
        for(int i = 0; i < n; i++)
        {
            int curr = temperatures[i];
            // if curr is higher
            while(!iStack.empty() && curr > iStack.top().first)
            {
                pair<int,int> lowTemp = iStack.top(); iStack.pop();

                res[lowTemp.second] = i - lowTemp.second;


            }

            iStack.push({curr, i});
        }
        return res;
        
    }
};
