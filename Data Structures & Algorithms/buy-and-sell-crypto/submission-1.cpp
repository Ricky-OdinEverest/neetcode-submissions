class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = 0;
        int sell = 1;

        int maxProfit = 0;

        while(sell < prices.size())
        {
            //if a profit can be made
            if(prices[buy] < prices[sell])
            {
                int currProfit = prices[sell] - prices[buy];

                maxProfit = max(maxProfit, currProfit);
            }
            else
            {
                // if you can't make a profit close the window
                buy = sell;
            }
            // no matter what. Look at the next sell price;
            sell++;
           

        }

        return maxProfit;


        
    }
};
