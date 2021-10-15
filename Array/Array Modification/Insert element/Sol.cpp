#include<iostream>
using namespace std;

int search(int n, int x, int a[]){
    for(int i =0;i<n;i++)
        if(a[i]==x)
            return i;
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<search(n,x,arr);
    return 0;
}
