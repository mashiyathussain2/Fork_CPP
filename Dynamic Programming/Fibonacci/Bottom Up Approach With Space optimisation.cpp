#include<iostream>
using namespace std;

// bottom up approach with space optimisation
int fibSpace(int n){
    if(n==0 or n==1){
        return n;
    }
    int a = 0;
    int b = 1;
    int c;
    for(int i = 2;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<fibSpace(n)<<endl;

    return 0;
}
