#include<iostream>
using namespace std;

int main ()
{
    int n , i ;
    cin>>n;
    if(n>0)
    {
        if(n%2==0)
        {
            for(i=2 ; i<=n ; i=i+2)
            {
                cout<<i<<" ";
            }
        } else
        {
            for(i=2 ; i<n ; i=i+2)
            {
                cout<<i<<" ";
            }
        }
    }
    else if(n<0)
    {
        if(n%2==0)
        {
            for(i=n ; i<=(-2) ; i=i+2)
            {
                cout<<i<<" ";
            }
        } else
        {
            for(i=(n+1) ; i<=(-2) ; i=i+2)
            {
                cout<<i<<" ";
            }
        }
    }
    else 
    {
        cout<<"invalid";
    }
    return 0;
    }
