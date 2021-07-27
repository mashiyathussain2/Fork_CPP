#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// top down approach
int coinExhange(int n, int coins[], int T, int dp[]){
    // base case
    if(n==0){
        return 0;
    }
    // lookup
    if(dp[n] !=0){
        return dp[n];
    }
    // recursive case
    int ans = INT_MAX;
    for(int i = 0; i<T; i++){
        if(n-coins[i]>=0){
            int subprob = coinExhange(n-coins[i], coins, T, dp);
            ans = min(ans, subprob + 1);
        }
    }
    dp[n] = ans;
    return dp[n];
}
int main(){
    int N = 15;
    int coins[] = {1,7,10};
    int dp[100] = {0};
    int T = sizeof(coins)/sizeof(int);
    cout<<coinExhange(N,coins,T,dp)<<endl;
    return 0;
}
