#include<iostream>
using namespace std;

int fast_power(int a, int n){
    // base case
    if(n==0){
        return 1;
    }
    // recursive case
    int sub = fast_power(a,n/2);
    sub *=sub;

    // check if the number is odd
    if(n & 1){
        return sub*a;
    }
    return sub;
}

int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    cout<<fast_power(a,n)<<endl;
    return 0;
}
