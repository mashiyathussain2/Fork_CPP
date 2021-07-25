#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  double L , W , B , H , R;
  cin>>L>>W>>B>>H>>R;
  cout<<(L*W)<<(0.5*B*H)<<(3.14*(pow(R,2)));
  
  return 0;
}
