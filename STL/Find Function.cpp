#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // search 
    int key;
    cin>>key;
    auto it = find(arr,arr+n, key);
    int index = it - arr;
    if(index == n){
        cout<<key<<" is Not present "<<endl;
    }
    else{
        cout<<"Present at index "<<index;
    }
}
