#include<iostream>
using namespace std;

int removeDup(int arr[], int n){
    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[res-1]){
           arr[res] = arr[i];
           res++;
        }
    }
    return res;
}


int main(){
    int arr[]={1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    n=removeDup(arr,n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
