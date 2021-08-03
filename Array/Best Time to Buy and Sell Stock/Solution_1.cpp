class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if (prices.size() == 0) return 0;
        
        int mn = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < mn) mn = prices[i];
            ans = max(ans, prices[i]-mn);    
        }
        
        return ans;
    }
};
