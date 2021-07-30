#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

int wines(int dp[][10], int prices[], int L, int R, int y){
    // base case 
    if(L>R){
        return 0;
    }
    if(dp[L][R] != 0){
        return dp[L][R];
    }
    // rec case 
    int pick_left = y*prices[L] + wines(dp,prices,L+1,R,y+1);
    int pick_right = y*prices[R] + wines(dp,prices,L,R-1,y+1);

    return dp[L][R] = max(pick_right,pick_left);
}
int main() {

    int a[] ={10, 22, 5, 75, 65, 80};
    int n=6;
    int dp[10][10] = {0};
    cout<<wines(dp,a,0,n-1,1)<<endl;
    return 0;
}
