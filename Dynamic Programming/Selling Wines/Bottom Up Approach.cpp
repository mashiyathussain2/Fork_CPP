#include <iostream>
#include<vector>
using namespace std;

int wines_bottom(int prices[], int n){
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i = n-1;i>=0;i--){
        for(int j = 0; j<n;j++){
            if(i==j){
                dp[i][i] = n*prices[i];
            }
            else if(i<j){
                int y = n - (j-i);
                int pick_left = prices[i]*y + dp[i+1][j];
                int pick_right = prices[j]*y + dp[i][j-1];
                dp[i][j] = max(pick_left,pick_right);
            }
        }
    }
    // to print matrix
    /*for(int i = 0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    } */   

    return dp[0][n-1];
}
int main() {

    int a[] ={2,3,5,1,4};
    int n=5;
    int dp[10][10] = {0};
    cout<<wines_bottom(a,n)<<endl;
    return 0;
}
