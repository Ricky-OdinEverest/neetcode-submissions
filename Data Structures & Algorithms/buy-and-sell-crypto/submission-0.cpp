class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int p : prices)
        {
            if(p < minPrice)
            {
                minPrice = p;
                
            }
            int profit = p - minPrice;
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        
        return maxProfit;
    }
};
