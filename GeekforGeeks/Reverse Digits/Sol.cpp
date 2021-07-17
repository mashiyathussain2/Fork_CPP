#include <iostream>
using namespace std;

int main() 
{
    int a , dig, rev;
    cin>>a;
    
    while(a!=0)
    {
        dig=a%10;
        rev=rev*10 + dig;
        a=a/10;
    }
    
    cout<<rev;
	return 0;
}
