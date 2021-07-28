#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// bottom up approach
int maxNonAdjacentSum(vector<int>array){
    int n = array.size();
    vector<int>dp(n+1,0);
    // corner case
    if(n==1){
        return max(array[0], 0);
    }
    else if(n==2){
        return max(0,max(array[0],array[1]));
    }   
    // bottom up logic 
    dp[0] = max(array[0],0);
    dp[1] = max(0,max(array[0],array[1]));
    for(int i =2; i<n;i++){
        int inc = array[i] + dp[i-2];
        int exc = dp[i-1];
        dp[i] = max(inc, exc);
    }
    return dp[n-1];
}
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<maxNonAdjacentSum(arr)<<endl;
    return 0;
}
