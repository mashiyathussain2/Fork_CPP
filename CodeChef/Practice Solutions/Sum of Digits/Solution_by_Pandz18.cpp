#include<iostream>
using namespace std;

int main ()
{           
int n ;
cin>>n;
while(n--)
{ 
int b , a,  s=0;
cin>>a;
while (a>0)
{  
b=a%10;
s=s+b;
a=a/10;
            
}
cout<<s<<endl;
}
return 0;
}
