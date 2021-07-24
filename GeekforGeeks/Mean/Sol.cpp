#include<iostream>
using namespace std;

int main()
{
  int n , A[100] , sum=0;
  cin>>n;
  
  for(int i=0 ; i<=n ; i++)
  {
    cin>>A[i];
  }

  for(int i=0 ; i<=n ; i++)
  {
    sum=sum+A[i];
  }
  
  cout<<sum/n;
  
  return 0;
}
