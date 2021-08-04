#include <iostream>
using namespace std;

int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones<<(i+j);
    int b = (1<<j)-1;
    int mask = a | b;
    int ans = ans & mask;
    return ans;
}
int main(){
    int n,i,j;
    cin>>n>>i>>j;
    cout<<clearRangeItoJ(n,i,j);
}
