#include<iostream>
using namespace std;

int getSum(int n){
        if(n==0)
        return 0;
        else
        return getSum(n/10)+n%10;
    };

int main(){
    int n=253;
    cout<<getSum(n)<<endl;
    return 0;
}
