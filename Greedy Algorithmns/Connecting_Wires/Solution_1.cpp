#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int white[]={3,4,1};
    int black[]={2,5,6};
    int n=sizeof(white)/sizeof(white[0]);

    //sort the arrays
    sort(white,white+n);
    sort(black,black+n);

    int ans =0;
    for(int i=0;i<n;i++){
        int len=abs(white[i]-black[i]);
        ans += len;
    }
    cout<<ans<<endl;
    return 0;
}
