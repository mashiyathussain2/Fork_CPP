#include<bits/stdc++.h>
using namespace std;

int ladderProblem(int n, int k){
    // base case
     if(n==0){
         return 1;
     }
     if(n<0){
         return 0;
     }
     int ans = 0;
     for(int i =1;i<=k;i++){
         ans += ladderProblem(n-i,k);
     }
     return ans;
}
int main(){
    int n,k;
    // says k =2 then steps can be 1,2.
    cin>>n>>k;
    cout<<ladderProblem(n,k);
	return 0;
}
