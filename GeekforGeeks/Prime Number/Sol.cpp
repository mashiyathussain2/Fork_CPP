#include<iostream>
using namespace std;

int main()
{
  int N, count=0;
  cin>>n;
  
  for(int i=1; i<=N ; i++)
  {
    if(n%i==0)
    {
      count++;
    }
  }
  
  cout<<count;
  return 0;
}
