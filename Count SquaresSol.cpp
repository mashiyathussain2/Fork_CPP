#include<iostream>
using namespace std;

int main()
{
  int i , n ;
  cin>>n;
  int A[n];
  
  for(i=1 ; i<=n ; i++)
  {
    for(int j=1 ; j<=i ; j++)
    {
      if((j*j)==i)
      {
        A[i]=j;
      }
    }
  }
  for(i=1 ; i<=n ; i++)
  {
  cout<<A[i];
  }
  
  return 0;
}
     
  
