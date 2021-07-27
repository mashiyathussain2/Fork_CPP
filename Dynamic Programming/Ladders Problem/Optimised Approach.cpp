#include<iostream>
using namespace std;

// ladder bottom up optimised approach
int ladders_optimised(int n, int k){
    int dp[100] = {0};
    dp[0] = dp[1] = 1;
    for(int i = 2; i<=k; i++){
        dp[i]=2*dp[i-1];
    }
    for(int i = k+1; i<=n; i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }
    return dp[n];
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<ladders_optimised(n,k)<<endl;

    return 0;
}
