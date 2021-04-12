#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            sum=sum+ele;

        }
        cout<<sum%k<<endl;

    }
    return 0;
}
