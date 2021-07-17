#include<iostream>
using namespace std;

int main()
{
  int i , n , pr=1;
  cin>>n;
  
  for(i=1 ; i<=n ; i++)
  {
    pr=pr*i;
  }
  
  cout<<pr;
  return 0;
}
