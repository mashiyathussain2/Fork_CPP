class Solution {
public:
  int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0;
        for(int j = 1; j <= amount; j++){
            for(int i = 0; i < coins.size(); i++){
                if(coins[i] <= j){
                    if(dp[j - coins[i]] == -1) continue;
                    dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
                }
            }
            if(dp[j] == INT_MAX) dp[j] = -1;
        }
        return dp[amount];
    }
};
