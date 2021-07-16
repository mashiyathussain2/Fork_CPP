#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int A , R , N;
  
  cin>>A>>R>>N;
  cout<<N<<"th term of GP:"<<" "<<A*(pow(R,(N-1)));

  return 0;
}
