#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n,k,s;cin>>n>>k;
	ll arr[200001];
	for(ll i=0;i<k;i++)arr[i]=1; 
	for(ll i=k;i<n;i++){
		s=0;
		for(ll j=i-k;j<i;j++){
			s+=arr[j];
		}
		arr[i]=s;
		arr[i]%=1000000007;
	}
	cout<<arr[n-1]<<endl;
}
	
