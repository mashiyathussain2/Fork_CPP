#include<iostream>
using namespace std;

int main()
{
 int A[3];

    for(int i=0;i<3;i++)
    {
        cin>>A[i]
    }
    
    for(int i=0;i<3;i++)
    {
        cout<<A[i];
        if(i=2)
        {
        A[i]=A[i]+1;
        cout<<A[i];  
        }
         
    }

return 0;
}
