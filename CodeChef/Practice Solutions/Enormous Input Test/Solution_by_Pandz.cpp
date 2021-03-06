#include<iostream>
using namespace std;

int main()
{
    int n , a , k , count=0 , i;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a%k==0)
        {
            count++;
        }
        else 
        {
            count=count+0;
        }
        
    }
    cout<<count;
    return 0;
}
