#include<iostream>
#include<math.h>

using namespace std;

int main()
{
  int X , Y , flag;
  cin>>X>>Y;
  
  for(int i=1 ; i<=Y ; i++)
  {
    int p=pow(X,i);
    
    if(p==X)
    {
      flag=1;
      break;
    }
  }
  
  if(flag==1)
  {
    cout<<"1";
  }
  else
  {
   cout<<"0";
  }
  
  return 0;
}
  
  
