#include<iostream>
using namespace std;

int main()
{
int A[100] , se,  pos;

for(int i=0;i<=4;i++)
cin>>A[i];
    
cin>>se;

for(int i=0;i<=4;i++)
{
if(se==A[i])
{
pos=i; 
}
}

cout<<pos;
    
return 0;
}
