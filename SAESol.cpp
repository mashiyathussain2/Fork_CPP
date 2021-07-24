#include<iostream>
using namespace std;

int main()
{
  int A[100] , i , se , n;
  cin>>n;
  
  for(i=0; i<=n; i++)
  {
    cin>>A[i];
  }
  
  cin>>se;
  
  for(i=0; i<=n; i++)
  {
    if(A[i]==se)
    {
      cout<<"Found at index"<<" "<<i;
    }
  }
  
  return 0;
}
