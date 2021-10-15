#include<iostream>
using namespace std;

//delete the elements
int delete_element(int a[], int n, int x){
    // Search x in array
    int i;
    for (i=0; i<n; i++)
         if(a[i] == x)
            break;
    // If x found in array
    // If x found in array
    if (i < n)
    // reduce size of array and move all
    // elements on space ahead
        n = n - 1;
        for (int j=i; j<n; j++)
             a[j] = a[j+1];
    return n;
}


int main(){
    int arr[] ={11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);;
    int x=8;

    //cout<<delete_element(arr,n,x)<<endl;

    n = delete_element(arr,n,x);
    
    cout << "Modified array is ";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
    return 0;
}
