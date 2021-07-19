#include<iostream>
using namespace std;

int main()
{
  int n , r , diff , sol1 , sol2 , sol3 , sol4 ;
  cin>>n>>r;
  
  for(int i=1 ; i<=n; i++)
  {
    sol1=sol1*i;
  }
  
  for(int j=1 ; j<=r; j++)
  {
    sol2=sol2*j;
  }
  
  diff=n-r;
  
   for(int k=1 ; k<=diff; k++)
  {
    sol3=sol3*k;
  }
  
  sol4=sol3*sol2;
  cout<<sol1/sol3;
  
  return 0;
  }
