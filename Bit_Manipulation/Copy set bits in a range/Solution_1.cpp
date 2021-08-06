#include <bits/stdc++.h>
using namespace std;

void copySetBits(unsigned &x, unsigned y, unsigned l, unsigned r){
    // base case
    if(l<1 || r>32){
        return;
    }
    for(int i=l;i<=r;i++){
        int mask = 1<<(i-1);
        if(y&mask){
            x = x | mask;
        }
    }
}
int main(){
unsigned x = 10, y = 13, l = 2, r = 3;
copySetBits(x, y, l, r);
cout<< x;
return 0;
}
