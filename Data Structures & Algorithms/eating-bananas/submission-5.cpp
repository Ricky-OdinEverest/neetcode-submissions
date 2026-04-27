class Solution {
public:

    bool fastEnough(vector<int>& piles, int middle, int h)
    {
        int totalTime = 0;

        for(int i = 0; i < piles.size(); i++)
        {
            int colTime = (piles[i] + middle - 1) / middle;
            totalTime += colTime;
            if(totalTime > h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {


        //bin search requires an order
        //sort(piles.begin(), piles.end());
        
        int n = piles.size();
        //int maxBph = piles[n - 1];
        int maxBph = *max_element(piles.begin(), piles.end());
        int minBph = 1;
        int bph = maxBph;
        int R = maxBph;

        while(R >= minBph)
        {
            int mid = minBph + (( R - minBph) / 2);
            bool canFinish = fastEnough(piles, mid, h);
            if(canFinish)
            {
                bph = mid;
                R = mid - 1;
            }
            else
            {
                minBph = mid + 1;
            }
        }

        return bph;
        
    }
};
