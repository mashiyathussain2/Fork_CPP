#include <iostream>
using namespace std;

int setBit(int n, int i){
    int mask = (1<<i);
    int ans = n | mask;
    return ans;
}
int main(){
    int n,i;
    cin>>n>>i;
    cout<<setBit(n,i);
}
