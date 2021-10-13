// IP:- {16, 17, 4, 3, 5, 2}
// OP:- 2 5 17

#include <iostream>
using namespace std;

void Leadersinaray(int arr[], int n){
    int current_ldr = arr[n-1];
    cout<<current_ldr<<" ";
    for(int i=n-2;i>=0;i--){
        if(current_ldr<arr[i]){
           current_ldr=arr[i];
           cout<<current_ldr<<" ";
        }
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Leadersinaray(arr, n);
    return 0;
}
