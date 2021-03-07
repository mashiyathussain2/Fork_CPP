#include <iostream>
using namespace std;

int main()
{
 int t , n;
 cin>>t;
 while(t--)
 {  
     int pr=1;
     cin>>n;
     for(int i =1; i<=n ;i++)
     {
      pr=pr*i;
     }
     cout<<pr<<endl;
 }
	return 0;
}
