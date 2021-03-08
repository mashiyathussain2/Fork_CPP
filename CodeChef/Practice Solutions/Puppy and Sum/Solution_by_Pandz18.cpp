#include <iostream>
using namespace std;

int SUM (int a , int b)
{
    int sm=0 , i;
    for(i=1;i<=b;i++)
    {
        sm=sm+i;
    }
    
    a--;
    if(a==0)
        return sm;
    else
        return SUM(a,sm);
}
    


int main() 
{
	int t , a , b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    int sum=0;
	    sum=SUM(a,b);
	    cout<<sum<<endl;
	    
	}
	return 0;
}
