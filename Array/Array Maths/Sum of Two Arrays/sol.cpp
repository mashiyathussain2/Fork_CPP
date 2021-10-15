#include<iostream>
using namespace std;

int main()
{
  int n, A[100] , B[100];
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
    cin>>A[i];
  }
  for(int j=0 ; j<n ; j++)
  {
    cin>>B[j];
  }
  
  for(int k=0 ; k<n ; k++)
  {
    cout<<"A["<<k<<"]"<<""<<"+"<<" "<<"B["<<k<<"] = "<<(A[k]+B[k])<<endl;
  }
                                                        
  return 0;
}
                                 
