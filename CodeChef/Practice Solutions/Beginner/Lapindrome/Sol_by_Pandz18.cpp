#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;

        int s = n.length()/2;
        string a = n.substr(0,s);
        string b;

        if(n.length()%2 == 0){
            b = n.substr(s, n.length());
        }else{
            b = n.substr(s+1, n.length());
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

    }
	return 0;
}
