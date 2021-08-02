// IP:-  1,2,3,4,5
//       k =2
// OP:- 3 4 5 1 2 


#include <iostream>
using namespace std;

// left rotate by d
void lrotateByD(int arr[], int n, int d){
    int temp[d];
    for(int i = 0; i<d; i++)
        temp[i] = arr[i];
    for(int i = d; i<n; i++)
       arr[i-d] = arr[i];
    for(int i = 0; i<d; i++)
       arr[n-d+i] = temp[i]; 
}

int main() {
    int arr[] = { 1,2,3,4,5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    lrotateByD(arr,n, d);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
