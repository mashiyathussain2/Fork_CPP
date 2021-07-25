#include<iostream>
using namespace std;

int main()
{
 int n , s=0 , s2=0;
 cin>>n;
 for(int i=1 ; i<=n ; i++)
 {
   if(i%2==0)
   {
     s2++;
   }
   else
   {
     s++;
   }
 }
  cout<<s<<" "<<s2;
  return 0;
}
