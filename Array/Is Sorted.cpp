#include<iostream>
using namespace std;

int isSorted(int arr[], int n){
    for(int i=1;i<n;i++)
        if(arr[i]<arr[i-1])
        return false;
  return true;
}



int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, n);
}
