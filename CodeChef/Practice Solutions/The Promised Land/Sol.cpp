#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int x,y,s;
	    cin>>x>>y>>s;
	    int arrx[x+1],arry[y+1];
	    arrx[0]=0;
	    arry[0]=0;
	    int counta=0,countb=0;
	    for(int i=1;i<=x;i++){
	        cin>>arrx[i];
	    }
	    for(int i=1;i<=x;i++){
	        counta+=(arrx[i]-arrx[i-1]-1)/s;
	    }
	    if(arrx[x]< n){
	        counta+=(n-arrx[x])/s;
	    }
	    for(int i=1;i<=y;i++){
	        cin>>arry[i];
	    }
	    for(int i=1;i<=y;i++){
	        countb+=(arry[i]-arry[i-1]-1)/s;
	    }
	    if(arry[y]< m){
	        countb+=(m-arry[y])/s;
	    }

	    cout<<counta*countb<<"\n";
	}
	
	return 0;
}
