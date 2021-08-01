#include<iostream>
using namespace std;

void dec(int n){
    // base case 
    if(n==0){
        return;
    }
    // recursiive case 
    dec(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}
