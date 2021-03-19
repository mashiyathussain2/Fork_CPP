#include <iostream>
using namespace std;

int main() {
    long int a;
    cin>>a;
    while(a--)
    {
        long long int k,l;
        cin>>k>>l;
        long long int arr[k];
        long long int arr2[k];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
            if(arr[i]%l==0)
            {
                arr2[i]=1;
            }
            else
            arr2[i]=0;
        }
        for(int i=0;i<k;i++)
        {
        cout<<arr2[i];
        }
        cout<<endl;
    }

	return 0;
}
