#include <iostream>
using namespace std;

int main() 
{
int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
	    if(n%2==1)
	       cout<<max(a*2,b)/min(a*2,b)<<endl;
	    else
	       cout<<max(a,b)/min(a,b)<<endl;
	}
	return 0;
	
}
