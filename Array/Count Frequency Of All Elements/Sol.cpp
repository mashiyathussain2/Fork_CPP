// IP:- arr[] = {10,10,10,25,30,30}
// OP:- 10 1
//      25 1
//      30 2

// IP:- {10,10,10,10}
// OP:- 10 4



#include <iostream>
using namespace std;

void freqCount(int arr[], int n){
    int freq = 1, i =1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout<<"Elements "<<arr[i-1]<<" has freq "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1] != arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<endl;
    }
}

int main() {
    int arr[] = {40,50,50,50,60,70,80,90,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    freqCount(arr, n);
    return 0;
}
