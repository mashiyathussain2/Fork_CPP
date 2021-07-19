#include<iostream>
using namespace std;

int main()
{
  int A[100] , sum=0 , n;
  
  cin>>n;
  for(int i=0; i<n ; i++)
    cin>>A[i];
  
  for(int j=0; j<n ; j++)
    sum=sum+A[i];
  
  cout<<sum;
  return 0;
}
