class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int n = prices.size();
        int min_buy_cost = prices[0],max_profit = 0;
        for(int i=1;i<n;i++){
            // sell the stock now
            max_profit = max(max_profit,prices[i]-min_buy_cost);
            
            // buy the stock now
            min_buy_cost = min(min_buy_cost,prices[i]);
        }
        return max_profit;
    }
        
};