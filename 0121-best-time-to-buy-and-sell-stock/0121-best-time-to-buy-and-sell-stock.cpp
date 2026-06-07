class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=prices[0],mini=0,profit=0;
        for(int i=0;i<prices.size();i++){
        cost=min(prices[i],cost);
        profit=max(prices[i]-cost,profit);
        
    }
    return profit;
    }
};