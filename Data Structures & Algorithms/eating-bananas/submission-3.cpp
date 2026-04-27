class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        //time we know is valid is highest value
        int res = r;

        while(l <= r)
        {
            // time to query
            int k = l + (r - l) / 2;
            int totalTime = 0;
            for(auto p : piles)
            {
                totalTime += (p + k - 1) / k;
            }
            if(totalTime <= h)
            {
                res = k; 
                r = k - 1;
            }
            else if(totalTime > h)
            {
                l = k + 1;

            }
        }
        return res;
    }
};
