#include<iostream>
 
using namespace std;
 
int gcd(int a, int b){
    for (;;){
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
 
int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		cin>>arr[0]>>arr[1];
		int l = gcd(arr[0],arr[1]);
 
		for(int i=2;i<n;i++){
			cin>>arr[i];
			l = gcd(l,arr[i]);
		}
		
		for(int i=0;i<n;i++){
			cout<<arr[i]/l<<" ";
		}
		cout<<endl;
 
		
		
	}
	return 0;
}
