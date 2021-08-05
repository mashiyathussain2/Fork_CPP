```
Given a wall of size of 4XN, and tiles of size (1,4) and (4,1). In how many ways you can build the wall?
```

#include <bits/stdc++.h>
using namespace std;

int TilingProblem(int length){
    // base case
    if(length<1){
        return 0;
    }
    if(length<=3){
        return 1;
    }
    if(length=4){
        return 2;
    }
    int ans = TilingProblem(length-1) + TilingProblem(length-4);
    return ans;
}
int main(){
    int length;
    cin>>length;
    cout<<TilingProblem(length);
	return 0;
}
