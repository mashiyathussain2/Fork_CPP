#include<iostream>
using namespace std;

int main()
{
int n , A[100] , i , j , se;

    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cin>>se;
    
     for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        if(A[i]+A[j]==se)
        {
            cout<<i<<" "<<j;
        }
    }
    return 0;
}
