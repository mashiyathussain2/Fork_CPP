#include <bits/stdc++.h>
using namespace std;

int isPowerTwo(unsigned n){
    return n && (!(n&(n-1)));
}
int findPosition(unsigned n){
    if(!isPowerTwo(n)){
        return -1;
    }
    unsigned i=1,pos=1;
    while((i & n) == 0){
        i = i<<1;
        pos++;
    }
    return pos;
}
int main(){
	int n = 128;
	int pos = findPosition(n);
	cout <<" Position " << pos << endl; 
	return 0;
}
