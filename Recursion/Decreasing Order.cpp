#include<iostream>
using namespace std;

void dec(int n){
    // base case 
    if(n==0){
        return;
    }
    // recursiive case 
    cout<<n<<" ";
    return dec(n-1);
}
int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}
