#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	    int number;
	    cin>>number;
	    int rev=0;
	    while(number>0)
	    {
	        int rem = number%10;
	        rev=rev*10 +rem ;
	        number=number/10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}
