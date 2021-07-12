#include <iostream>
using namespace std;

int main()
{
   int k , i , j , n ,A[100];

   cin>>n;
   for(i=0; i<n ; i++)
   {
       cin>>A[i];
   }

    cin>>k;
    
   for(i=0; i<n ; i++)
   {
       for(j=1 ; j<=n; j++)
       {
           if((A[i] + A[j]) == k)
           cout<<"true";
       }
   }

   return 0;
}
