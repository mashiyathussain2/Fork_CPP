#include <iostream>
using namespace std;

void updateBit(int &n, int i, int v){
    int mask = ~(1<<i);
    int cleared_n = n & mask;
    n = cleared_n | (v<<i);
}
int main(){
    int n,i,v;
    cin>>n>>i>>v;
    updateBit(n,i,v);
    cout<<n<<endl;
}
