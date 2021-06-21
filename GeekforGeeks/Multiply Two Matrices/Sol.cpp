#include <iostream>
using namespace std;

int main()
{
  int A[100] , B[100] , C[100] , n , i;
  
  cin>>n;
  
  for(i=0;i<n;i++)
  {
    cin>>A[i];
  }
  
  for(i=0;i<n;i++)
  {
    cin>>B[i];
  }
  
  for(i=0;i<n;i++)
  {
    C[i]=A[i]*B[i];
  }
  
  for(i=0;i<n;i++)
  {
    cout<<C[i];
  }
  
  return 0;
}
