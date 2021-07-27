#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// bottom up approach
int coinExhange(int m, vector<int> denoms){
    vector<int>dp(m+1,0); // creating array
    dp[0] = 0;
    for(int i = 1; i<=m; i++){
        dp[i]=INT_MAX;
        for(int c:denoms){
            if(i-c>=0 and dp[i-c] != INT_MAX){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[m]==INT_MAX? -1 : dp[m];
}
int main(){
    vector<int>denoms = {2}; // types
    int m;
    cin>>m;
    cout<<coinExhange(m,denoms)<<endl;
    return 0;
}
