// IP:- { 0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9 };
// OP:- {1 9 8 4 0 0 2 7 0 6 0 9 0 }



#include <iostream>
using namespace std;

// left rotate by one 
void lrotatebyOne(int arr[], int n){
    int temp = arr[0];
    for(int i =1; i<n;i++)
        arr[i-1] = arr[i];
        arr[n-1] = temp;
}
int main() {
    int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    lrotatebyOne(arr,n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
