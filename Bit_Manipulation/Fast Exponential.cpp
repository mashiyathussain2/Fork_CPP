```
Convert the integer N to its binary form and follow the steps below:  

Initialize ans to store the final answer of AN.
Traverse until N > 0 and in each iteration, perform Right Shift operation on it.
Also, in each iteration, multiply A with itself and update it.
If current LSB is set, then multiply current value of A to ans.
Finally, after completing the above steps, print ans.
```
  

#include <iostream>
using namespace std;

int powerOptimised(int a, int n){
    int ans = 1;
    while(n>0){
        int last_bit = (n&1);
        if(last_bit==1){
            ans = ans*a;
        }
        a = a*a;
        n = n>>1;
    }
    return ans;
}

int main(){
	int a, n;
    cin>>a>>n;
	cout << powerOptimised(a, n);
	return 0;
}
