#include <iostream>
using namespace std;
int main()
{
  int n , number , dig;
  cin>>number;
  int rev=0;
  if(number>0)
  { 
      n=number;
    do
     {
         dig = number % 10;
         rev = (rev * 10) + dig;
         number= number / 10;
     }  while (number != 0);

         if(n==rev)
         {
            cout<<"YES";
         }
         else
         {
            cout<<"no";
         }
         } 
  else 
  {
      cout<<"invalid";
  }
  return 0;
}
