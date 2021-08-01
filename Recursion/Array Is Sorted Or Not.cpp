#include<iostream>
using namespace std;

bool isSorted(int a[], int n){
    // base case
    if(n==0 or n==1){
        return true;
    }
    // recursive case
    if(a[0]<a[1] and isSorted(a+1, n-1)){
        return true;
    }
    return false;
}
int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n)<<endl;

    return 0;
}
