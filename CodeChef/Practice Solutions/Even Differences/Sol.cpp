#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test,n;
  cin>>test;
  while(test--)
  {
      cin>>n;
      int a[n],c=0,d=0;
      for(int i=0;i<n;i++)
{
          cin>>a[i];
          if(a[i]%2==1)
            c++;
            else
                d++;
      }
      cout<<min(c,d)<<endl;
  }
}
