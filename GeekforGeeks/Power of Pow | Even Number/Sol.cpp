#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n,sum=0,c=2;
  cin>>n;
  
  for(int i=1 ; i<=n ; i++)
  {
      sum=sum+pow(c,2);
      c=c+2;
  }
  
  cout<<sum;
  return 0;
}
