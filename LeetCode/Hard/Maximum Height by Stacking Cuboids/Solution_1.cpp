class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        vector<vector<int>> v = cuboids;
        for(auto &cube: v)
            sort(cube.begin(), cube.end());
        sort(v.begin(), v.end());
        int ans = INT32_MIN, n = v.size();
        vector<int> dp(n, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(v[j][0] <= v[i][0] && v[j][1] <= v[i][1] && v[j][2] <= v[i][2]){
                    dp[i] = max(dp[i], dp[j]);
                }
            }
            dp[i] += v[i][2];
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
