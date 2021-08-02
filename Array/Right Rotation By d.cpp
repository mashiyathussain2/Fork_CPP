#include <iostream>
using namespace std;

/*Function to reverse arr[]
from index start to end*/
void reverseArray(int arr[], int start,
                            int end)
{
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
 
/* Function to right rotate arr[]
of size n by d */
void rightRotate(int arr[], int d, int n)
{
    reverseArray(arr, 0, n-1);
    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
}

int main() {
    int arr[] = { 1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    rightRotate(arr,n, d);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
