#include<iostream>
using namespace std;

int largest_number(int arr[], int n){
    int res= 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res])
          res = i;
    }
    return res;
}



int main(){
    int arr[]={71,42,13,4,95};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largest_number(arr, n);
    
    return 0;
}
