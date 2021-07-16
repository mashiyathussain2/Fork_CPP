#include<iostream>
using namespace std;

int main()
{
    int A[100] , target, i , j , n;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter values";
    for(i=0 ; i<n ; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter target";
    cin>>target;

    for(i=0; i<n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if((A[i]+A[j]) == target)
            {
                cout<<A[i]<<""<<A[j];
                break;
            }
        }
    }

    return 0;
}
