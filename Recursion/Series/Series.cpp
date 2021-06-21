#include<iostream>
using namespace std;

int main()
{
    int i , n;

    cin>>n;

    if(n>0)
    {
    if(n%2==0)
    {
        for(i=0;i<=n;i=i+2)
        cout<<i<<" ";
    }
    else
    {
        for(i=0;i<n;i=i+2)
        cout<<i<<" ";
    }
        
    }
    else
    {
    if(n%2==0)
    {
        for(i=n;i<=0;i=i+2)
        cout<<i<<" ";
    }
    else
    {
        for(i=n;i<0;i=i+2)
        cout<<i<<" ";
    }
    }
        
    return 0;
    }
    
