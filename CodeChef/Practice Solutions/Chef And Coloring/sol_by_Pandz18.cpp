#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() 
{
int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,C1=0,C2=0,C3=0;
	    cin>>n;
	    char col[n+1];
	    for(int j=0;j<n;j++)
	    {
	        cin>>col[j];
	        if(col[j]=='R')C1++;
	        else if(col[j]=='B')C2++;
	        else C3++;
	    }
	   cout<<n-max(max(C1,C2),C3)<<endl;
	}
	return 0;
}
