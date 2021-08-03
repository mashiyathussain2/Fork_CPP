#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // search 
    int key;
    cin>>key;
    auto present = binary_search(arr, arr+n, key);
    if(present){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
}
