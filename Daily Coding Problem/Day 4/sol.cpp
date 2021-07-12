#include<iostream>
#include <bits/stdc++>
using namespace std;

int main()
{
    int A[100] , i , n , temp, res;
    cin>>n;

    for(i=0 ; i<n ; i++)
    {
        cin>>A[100];
    }

    
    for(i=0 ; i<n ; i++)
    {
        if(A[i] > A[i+1])
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }

    res = A[0];

    for (int i = 1; i < n; i++)
    res = min(res, arr[i]);
    
    cout<<res-1;
    return 0;
    
}
