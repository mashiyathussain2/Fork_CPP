#include<iostream>
using namespace std;

int lastOcc(int *a, int n, int key){
    // base case
    if(n==0){
        return -1;
    }
    // recursive case
    int i = lastOcc(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }else{
            return -1;
        }
    }
    return i+1;
}
int main(){
    //int arr[] ={8,2,3,4,5};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
   // int n = sizeof(arr)/sizeof(int);
    cout<<lastOcc(arr,n,key)<<endl;
    return 0;
}
