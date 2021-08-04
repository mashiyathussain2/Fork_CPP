#include <iostream>
using namespace std;

int clearRange(int n, int i){
    int mask = (-1<<i);
    return n & mask;
}
int main(){
    int n,i;
    cin>>n>>i;
    cout<<clearRange(n,i);
}
