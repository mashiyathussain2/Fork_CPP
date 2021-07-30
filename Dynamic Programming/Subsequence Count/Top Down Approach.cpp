#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

int countSub(string a, string b, int m, int n,int dp[]){
    // base case
    if((m == -1 and n == -1) or n == -1){
        return 1;
    }
    if(m==-1){
        return 0;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    // rec case 
    if(a[m] == b[n]){
        return countSub(a,b,m-1,n-1,dp) + countSub(a,b,m-1,n,dp);
    }
    return dp[n]=countSub(a,b,m-1,n,dp);
}
int main() {
    string a = "ABCECDGCC";
    string b = "ABC";
    int dp[1000] = {0};
    cout<<countSub(a,b,a.size()-1,b.size()-1,dp)<<endl;
    return 0;
}
