#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,q;
        cin>>n>>q;
        long long int d,a=1;
        for (long long int j=0;j<n;j++){
            cin>>d;
            a*=d;
        }
        int x;
        for (long long int k=0;k<q;k++){
            cin>>x;
            x=floor(x/a);
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
