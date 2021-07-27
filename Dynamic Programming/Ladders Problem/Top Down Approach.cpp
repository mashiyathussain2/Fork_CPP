#include<iostream>
using namespace std;

// ladder top down
int ladders_topdown(int n, int k, int dp[]){
    // base case
    if(n==0){
        return 1;
    }
    // lookup 
    if(dp[n] != 0){
        return dp[n];
    }
    // recursive case
    int ways = 0;
    for(int i = 1; i<=k; i++){
        if(n-i>=0){
            ways += ladders_topdown(n-i,k,dp);
        }
    }
    return dp[n] = ways;
}
int main(){
    int n,k;
    cin>>n>>k;
    int dp[100] ={0};
    cout<<ladders_topdown(n,k,dp)<<endl;

    return 0;
}
