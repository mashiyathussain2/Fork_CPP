#include<iostream>
using namespace std;

int main()
{
 int A[100], i , n , sum=0;
  
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>A[i];
 }
  
  for(i=0;i<n;i++)
 {
  sum=sum+A[i];
 }
  
  cout<<sum;
  
  return 0;
}
