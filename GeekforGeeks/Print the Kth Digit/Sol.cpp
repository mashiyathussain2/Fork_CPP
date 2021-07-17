#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a , b , res,  dig , n;
	cin>>a>>b;
	res = pow(a , b);
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
	    dig=res%10;
	}
	cout<<dig;
	
	return 0;
}
