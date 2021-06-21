#include<iostream>
using namespace std;

int main ()
{
    int t ,  n1 , s=0 , s1=0 , s2=0 ,   s3=0;
    cin>>t;
    

    for(int i=0; i<t;i++)
    {
     cin>>n1;

    
    if(n1>=0)
    {
    if(n1%2==0)
    {

    for(int j=0; j<=n1;j=j+2)
    {
         cout<<j<<" ";

        
    }
    cout<<""<<endl;
    }
    else
    {
        for(int k=0; k<n1;k=k+2)
    {
       
       cout<<k<<" ";

        
        

    }
    cout<<""<<endl;
    }
    }
   else
    {
    if(n1%2==0)
    {

    for(int l=n1; l<=0;l=l+2)
    {
        

        cout<<l<<" ";
        
    }

    cout<<""<<endl;
    }
    else
    {
        for(int m=n1; m<0;m=m+2)
    {
       
        cout<<m<<" ";

        
    }

    cout<<""<<endl;
    }
    }

 }
   return 0;
}
