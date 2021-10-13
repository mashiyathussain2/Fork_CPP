// IP:- {0,1,1,0,1,0}
// OP: 2

#include <bits/stdc++.h>
using namespace std;

int maxConOnes(bool arr[], int n){
    int res=0,curr=0;
    for(int i =0;i<n;i++){
        if(arr[i] == 0){
            curr = 0;
        }
        else{
            curr++;
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
	bool arr[] = {0,1,0,0,1,1,1,1,0,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxConOnes(arr, n);
	return 0;
}
