#include<iostream>
using namespace std;

int main()
{
  int i , pr=1 , n;
  cin>>n;
  
  for(i=1 ; i<=n ; i++)
  {
    pr=pr*i;
  }
  
  cout<<pr;

  return 0;
}
