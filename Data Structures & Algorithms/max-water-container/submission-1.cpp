class Solution {
public:
    int maxArea(vector<int>& heights) {

    int l = 0;
    int r = heights.size() - 1;
    int res = 0;

    while(l < r)
    {
        //area = distance * minHeight
        int area = min(heights[l], heights[r]) * (r - l);

        res = max(res, area);
        // if l is short increment l. else if r is short or even decrement r;
        if(heights[l] <= heights[r])
        {
        l++;
        }
        else
        {
        r--;
        }
    }

        return res;
    }
};
