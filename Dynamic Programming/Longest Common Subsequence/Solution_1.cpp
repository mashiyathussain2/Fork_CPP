#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

int lcs(string s1, string s2){
    int n1 = s1.length();
    int n2 = s2.length();
    // 2d dp array
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
    for(int i =1;i<=n1;i++){
        for(int j = 1; j<=n2; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                int op1 = dp[i-1][j];
                int op2 = dp[i][j-1];
                dp[i][j] = max(op1,op2);
            }
        }
    }
    return dp[n1][n2];
}
int main() {
    string s1 = "abc";
    string s2 = "def";
    cout<<lcs(s1,s2)<<endl;
    return 0;
}
