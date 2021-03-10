#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n>0)
	{
	    int a[100000],f=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        if(a[a[i]]!=i)
	        {
	            f=1;
	        }
	    }
	    if(f==0)
	    {
	        cout<<"ambiguous"<<endl;
	    }
	    else
	    {
	        cout<<"not ambiguous"<<endl;
	    }
	    cin>>n;
	}
	return 0;
}
