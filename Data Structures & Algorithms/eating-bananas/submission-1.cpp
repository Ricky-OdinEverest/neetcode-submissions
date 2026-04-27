class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int r = *max_element(piles.begin(), piles.end());

        int l = 1;
        int res = r;
        while(l <= r)
        {
            int m = l + (r - l) / 2;
            long long totalTime = 0; 
            for(auto pile : piles)
            {
                totalTime += ceil(static_cast<double>(pile) / m);
            }
            if(totalTime <= h)
            {
                res = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }

        }
        return res;
        
    }
};
