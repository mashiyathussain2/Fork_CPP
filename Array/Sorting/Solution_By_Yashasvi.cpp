#include<iostream>
using namespace std;
void selectionsort(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
void selectionsort(int arr[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        int minid=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[minid]>arr[j])
            {
                minid=j;
            }
        }
        int temp=arr[minid];
        arr[minid]=arr[i];
        arr[i]=temp;
    }
}
