class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int profit = 0;

        int buy = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            int sellPrice = prices[i];
            if(prices[i] < buy) buy = prices[i];

            profit = max(profit, sellPrice - buy);

        }

        return profit;
        
    }
};
