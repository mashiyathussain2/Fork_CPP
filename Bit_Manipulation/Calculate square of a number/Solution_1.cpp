#include <bits/stdc++.h>
using namespace std;

int square(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n<0){
        n = -n;
    }
    int x = n>>1;
    // if it is odd
    if(n&1){
        return ((square(x)<<2) + (x<<2) + 1);
    }
    else{
        return (square(x)<<2);
    }
}
int main(){
    int n;
    cin>>n;
	//for (int n = 1; n <= 5; n++)
		cout << "n = " << n << ", n^2 = " << square(n)<< endl;
	return 0;
}
