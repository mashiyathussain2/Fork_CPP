#include <iostream>
#include<vector>
using namespace std;

int countBSTTopDown(int n, int dp[]){
    if(n==0 or n==1){
        return 1;
    }
    if(dp[n] !=0){
        return dp[n];
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        int x = countBSTTopDown(i-1,dp);
        int y = countBSTTopDown(n-i,dp);
        ans += x*y;
    }
    return dp[n] = ans;
}
int main() {
    int n = 4;
    int dp[100] = {0};
    cout<<countBSTTopDown(n,dp)<<endl;
    return 0;
}
