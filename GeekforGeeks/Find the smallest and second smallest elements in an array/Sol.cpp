#include<iostream>
using namespace std;

int main()
{
  int A[100] , n , i , max , sm , temp; 
  cin>>n;
  
  for(i=0; i<=n ; i++)
  {
    cin>>A[i];
  }
    max=A[0];
  
  for(i=0; i<=n ; i++)
  {
    if(A[i]>A[i+1])
    {
      temp=A[i];
      A[i]=A[i+1];
      A[i+1]=temp;
    }
  }
  
    cout << "Largest number : " << max<<endl;
    cout << "Second smallest number : " << A[n - 1];
    return 0;
}
