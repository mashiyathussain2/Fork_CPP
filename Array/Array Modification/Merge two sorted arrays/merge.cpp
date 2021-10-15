#include <bits/stdc++.h>
using namespace std;
 
// Function to perform the partition
// around the pivot element
void partition(int arr[], int N,
               int brr[], int M,
               int Pivot)
{
    // Stores index of each element
    // of the array, arr[]
    int l = N - 1;
 
    // Stores index of each element
    // of the array, brr[]
    int r = 0;
 
    // Traverse both the array
    while (l >= 0 && r < M) {
 
        // If pivot is
        // smaller than arr[l]
        if (arr[l] < Pivot)
            l--;
 
        // If Pivot is
        // greater than brr[r]
        else if (brr[r] > Pivot)
            r++;
 
        // If either arr[l] > Pivot
        // or brr[r] < Pivot
        else {
            swap(arr[l], brr[r]);
            l--;
            r++;
        }
    }
}
 
// Function to merge
// the two sorted array
void Merge(int arr[], int N,
           int brr[], int M)
{
    // Stores index of each element
    // of the array arr[]
    int l = 0;
 
    // Stores index of each element
    // of the array brr[]
    int r = 0;
 
    // Stores index of each element
    // the final sorted array
    int index = -1;
 
    // Stores the pivot element
    int Pivot = 0;
 
    // Traverse both the array
    while (index < N && l < N && r < M) {
 
        if (arr[l] < brr[r]) {
            Pivot = arr[l++];
        }
        else {
            Pivot = brr[r++];
        }
        index++;
    }
 
    // If pivot element is not found
    // or index < N
    while (index < N && l < N) {
        Pivot = arr[l++];
        index++;
    }
 
    // If pivot element is not found
    // or index < N
    while (index < N && r < M) {
        Pivot = brr[r++];
        index++;
    }
 
    // Place the first N elements of
    // the sorted array into arr[]
    // and the last M elements of
    // the sorted array into brr[]
    partition(arr, N, brr,
              M, Pivot);
 
    // Sort both the arrays
    sort(arr, arr + N);
 
    sort(brr, brr + M);
 
    // Print the first N elements
    // in sorted order
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
 
    // Print the last M elements
    // in sorted order
    for (int i = 0; i < M; i++)
        cout << brr[i] << " ";
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 5, 9 };
    int brr[] = { 2, 4, 7, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int M = sizeof(brr) / sizeof(brr[0]);
    Merge(arr, N, brr, M);
 
    return 0;
}
