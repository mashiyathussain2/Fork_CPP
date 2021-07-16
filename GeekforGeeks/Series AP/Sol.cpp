#include<iostream>
using namespace std;

int main()
{
  int a1 , a2  , n;
  cin>>a1>>a2>>n;
  
  cout<<n<<"th term of AP:"<<" "<<a1+((n-1)(a2-a1));
  return 0;
}
