#include<iostream>
using namespace std;

int main()
{
  int n , r , diff , sol1=1 , sol2=1, res;
  cin>>n>>r;
  
  diff=n-r;
  
  for(int i=1 ; i<=n ; i++)
  {
    sol1=sol1*i;
  }
  
  for(int j=1 ; j<=diff ; j++)
  {
    sol2=sol2*j;
  }
  
  res=sol1/sol2;
  cout<<res;
  
  return 0;
}
