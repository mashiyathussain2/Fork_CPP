#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int quantity, price;
	    cin>>quantity>>price;
	    double cost = quantity*price;
	   if(quantity > 1000){
	        std::cout << std::setprecision(6) << std::fixed;
	       cout<<cost - 0.1 * cost<<endl;
	   }
	    else {
	         std::cout << std::setprecision(6) << std::fixed;
	         cout<<cost<<endl;
	    }
	}
	return 0;
}
