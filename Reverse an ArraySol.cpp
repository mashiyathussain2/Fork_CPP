#include<iostream>
using namespace std;

int main()
{
  int A[100] , t , n ;
  cin>>t;
  
  while(t--)
  {
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
      cin>>A[i];
    }
    
    for(int j=n ; j>=1 ; j--)
    {
      cout<<A[j];
    }
  }
  
  return 0;
}
