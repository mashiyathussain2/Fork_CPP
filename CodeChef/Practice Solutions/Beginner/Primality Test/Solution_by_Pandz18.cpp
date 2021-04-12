#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==0||n==1)
    return false;
    else
    {
        for(int j=2;j*j<=n;j++)
        {
            if(n%j==0)
            return false;
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(isPrime(n))
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
