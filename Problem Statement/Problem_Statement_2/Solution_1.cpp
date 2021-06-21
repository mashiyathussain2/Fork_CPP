#include<iostream>
using namespace std;

int findOddd(int arr[], int n)
{
    int res=0;
    for(int i = 0; i < n; i++){
        res=res^arr[i];    // using xor operator
    }
    return res;

}



int main()
{
    int arr[]= {4, 3, 4, 4, 4, 5, 5,3,3}, n = 9;
    cout<<findOddd(arr, n);
    
}
