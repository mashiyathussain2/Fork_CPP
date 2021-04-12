#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define M 1000000007
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll fact[1000002];
    fact[0] = 1;
    for(int i=1;i<1000002;++i){
        fact[i] = (fact[i-1]*i)%M;
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = (fact[n+1]-1)%M;
        cout<<ans<<"\n";
    }
    return 0;
}
