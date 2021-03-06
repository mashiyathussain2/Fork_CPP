#include<iostream>
using  namespace std;

int main ()
{
    int n ;
    cin>>n;
    
    for(int i=0;i<n;i++)
    { int  a , b;
    cin>>a>>b;
    int rem;
    
        if(a<b)
        {
            cout<<a<<endl;;
        }
        else
        {
        rem=a%b;
        cout<<rem<<endl;
        
    }
    }
    
    return 0;
}
