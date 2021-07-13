#include <iostream>
using namespace std;

int main()
{
    int i , pr, j , n,  A[100] , B[100];

    cin>>n;
    for(i=1; i<=n ; i++)
    {
        cin>>A[i];
    }

    for(i=1; i<=n ; i++)
    {
        pr=1;

        for(j=1; j<=n ; j++)
        {   
            if(j!=i)
            {   
                pr=pr*j;
            }
            
        }
        
        cout<<pr<<" ";
    }

    return 0;
}
