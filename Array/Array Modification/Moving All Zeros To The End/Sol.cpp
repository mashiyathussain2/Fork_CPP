#include <iostream>
using namespace std;

void MoveZeros(int arr[], int n){
    // Count of non-zero elements
    int count = 0;
    // Traverse the array. If arr[i] is non-zero, then
    // swap the element at index 'count' with the
    // element at index 'i'
    for(int i=0;i<n;i++)
        if(arr[i] != 0)
            swap(arr[count++],arr[i]);
            //count++;
}
int main() {
    int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    MoveZeros(arr,n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
