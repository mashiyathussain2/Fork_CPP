#include<iostream>
using namespace std;
int main ()
{
   int i, j, n,temp=0;
   int a[100];
   cin>>n;
   
   for(i = 0; i<n; i++) 
   {
      cin>>a[i];
   }

for(i = 0; i<n; i++) 
{
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) 
      {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}

for(i = 0; i<n; i++) 
{
   cout <<a[i]<<"\t";
}

return 0;
}
