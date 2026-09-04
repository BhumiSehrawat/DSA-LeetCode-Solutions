class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int profit=0;
        int minindex=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-minindex);
            minindex=min(minindex,prices[i]);
        }
        return profit;
    }
};