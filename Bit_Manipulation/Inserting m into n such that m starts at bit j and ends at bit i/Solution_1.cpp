```
// Algorithm
1. Clear the bits j through i in n.
2. Do m<<i
3. OR of n(with clear bits) and M|(with shifted)
```



#include <iostream>
using namespace std;

int clearRangeItoJ(int n, int i, int j){
    int ones = (~0);
    int a = ones<<(1+j);
    int b = (1+i)-1;
    int mask = a | b;
    int ans = n & mask;
    return ans;
}
int ReplaceBits(int n, int m, int i, int j){
    int n_ = clearRangeItoJ(n,i,j);
    int ans = n_ | (m<<i);
    return ans;
}
int main(){
    int n=5;
    int m=3;
    int i=1,j=2;
   // cin>>n>>m>>i>>j;
    cout<<ReplaceBits(n,m,i,j);

    return 0;
}
