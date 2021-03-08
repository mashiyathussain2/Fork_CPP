#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // code here
    int t;
    cin>>t;
    while(t--){
     int b;
     cin>>b;
     b-=2;
     b/=2;
     cout<<(b*(b+1))/2<<endl;
        
    }
    return 0;
}
