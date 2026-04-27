class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {

        int curSum = 1;
        int maxSum = 1;
        //int prevHigher = 0;
        int n = arr.size();
  
        for(int i = 1; i < n; i++)
        {   

            int prev = arr[i - 1];
            int curr = arr[i];
            int curFlipper = (prev > curr) - (prev == curr);

            if(curFlipper == -1)
            {
              curSum = 1;    
            } 
            else if(i > 1)
            {
                int prevPrev = arr[i - 2];
                int prevCurr = arr[i - 1];
                int lastFlipper = (prevPrev > prevCurr) - (prevPrev == prevCurr);

                if(lastFlipper != curFlipper)
                {
                    curSum++;
                    maxSum = max(curSum, maxSum);                    
                }
                else
                {
                    curSum = 2;
                }

            }
            else
            {
                curSum = 2;
                maxSum = max(curSum, maxSum);
            }

        }

        return maxSum;
        
    }
};