#include<iostream>
using namespace std;

// top down approach 
int fib(int n, int dp[]){
    //base case
    if(n==0 or n==1){
        return n;
    }
    // check if the state is already computed
    if(dp[n] != 0){
        return dp[n];
    }
    // otherwise compute the state and store it
    return dp[n]=fib(n-1,dp) + fib(n-2,dp);
}
int main(){
    int n;
    cin>>n;

    int dp[100]={0};
    cout<<fib(n,dp)<<endl;

    return 0;
}
