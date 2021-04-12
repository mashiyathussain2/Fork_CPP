#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{

	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],max=0,v,rem;
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            v=(a[i])*(a[j]);
	            int sum=0;
	            while(v!=0)
	            {
	               rem=v%10;
	               sum=sum+rem;
	               v=v/10;
	            }
	            if(sum > max)
	             max=sum;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
