#include <iostream>
using namespace std;

int main() 
{
	int t , n , count1=0 , count2=0;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n;
	    if(n%2==0)
	    {
	        count1++;
	    }
	    else
	    {
	        count2++;
	    }
	}
	if(count1>count2)
	{
        cout<<"READY FOR BATTLE"<<endl;
	}
else
{
	  cout<<"NOT READY";
	}
	return 0;
}
