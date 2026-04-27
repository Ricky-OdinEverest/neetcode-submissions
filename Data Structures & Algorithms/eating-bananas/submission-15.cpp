class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int R = *max_element(piles.begin(), piles.end());
        int L = 1;

        while(L <= R)
        {
            int Mid = L +((R - L) / 2);
            // mid is valid and a slower speed is not
            if(eat(piles, h,  Mid) )
            {
                if(Mid > 1 && !eat(piles, h, Mid - 1))
                {
                    return Mid;
                }
                else if (Mid == 1) return Mid;
                
            } 
            if(eat(piles, h,  Mid))  R  = Mid - 1;
            else  L  = Mid + 1;
        }

        return -1;
        
    }

    bool eat(vector<int>& piles, int h, int speed)
    {
        int time = 0;

        for(auto pile : piles)
        {
            time += (pile + speed - 1) / speed;
            //if(time > h) return false;
        }

        return time <= h;
    }
};
