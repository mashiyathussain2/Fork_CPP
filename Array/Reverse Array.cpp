#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int low = 0,high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}


int main(){
    int arr[]={11,22,33,44,55,66,77};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
         cout << arr[i] << " "<<endl;
    return 0;
}
