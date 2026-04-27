class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

     
            int n = intervals.size();
            int i = 0;

            int lower = newInterval[0];
            int upper = newInterval[1];

             vector<vector<int>> res;
            //put every interval lower than new on the list
            while(i < n && intervals[i][1] < lower)
            {
                res.push_back(intervals[i]);   
                i++;
            }
            //attempt to update new interval
            //attempt to cosume other interval.
            //failts it upper is less than intervals[i][0]
            //only edit. do not insert
            while (i < n && newInterval[1] >= intervals[i][0]) 
            {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back({newInterval[0], newInterval[1]});  

        while(i < n)
        {
            res.push_back(intervals[i]);  
            i++;
        }

        return res;
    }
};
