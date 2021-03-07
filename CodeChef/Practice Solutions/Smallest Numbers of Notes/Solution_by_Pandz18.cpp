#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t>0)
	{
	    int a,sum=0;
        cin>>a;
        sum+=a/100;
        a%=100;
        sum+=a/50;
        a%=50;
        sum+=a/10;
        a%=10;
        sum+=a/5;
        a%=5;
        sum+=a/2;
        a%=2;
        sum+=a/1;
        a%=1;
        cout<<sum<<endl;
	    t--;
	}
	return 0;
}
