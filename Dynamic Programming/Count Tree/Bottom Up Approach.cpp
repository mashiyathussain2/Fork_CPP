#include <iostream>
#include<vector>
using namespace std;

int countBSTBottomUp(int N){
    vector<int>dp(N+1,0);
    dp[0] = dp[1] = 1;
    for(int n=2;n<=N;n++){
        for(int i=1;i<=n;i++){
            dp[n] += (dp[i-1]*dp[n-i]);
        }
    }
    return dp[N];
}
int main() {
    int n = 4;
    int dp[100] = {0};
    cout<<countBSTBottomUp(n)<<endl;
    return 0;
}
