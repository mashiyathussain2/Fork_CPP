#include<iostream>
using namespace std;

int decimaltoBinary(int n){
    int ans =0;
    int p=1; // 10^0 =1 

    while(n>0){
        int last_bit = (n&1);
        ans +=p*last_bit;
        p=p*10;  // updating power of p
        n=n>>1;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimaltoBinary(n)<<endl;

    return 0;
}
