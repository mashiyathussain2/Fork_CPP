#include <iostream>
using namespace std;

int main()
{
  int max, i , n , A[100];
  
  cin>>n;
  
  for(i=0 ; i<n ; i++)
  {
    cin>>A[i];
  }
  
  max=A[0];
  
  for(i=0 ; i<n ; i++)
  {
    if(max<A[i])
    {
      max=A[i]
      }
  }
  
  cout<<max;
  return 0;
  }
