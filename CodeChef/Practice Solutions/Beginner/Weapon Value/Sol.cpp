#include <iostream>
using namespace std;

int main() {

	int t,n;
	cin>>t;
	while(t--)
  {
	    cin>>n;
	    string s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n-1;i++){
	        for(int j=0;j<10;j++){
	            if((s[i][j]=='1' && s[i+1][j]=='1')||(s[i][j]=='0' && s[i+1][j]=='0'))
              {
	                s[i+1][j]='0';
	            } else{
	                s[i+1][j]='1';
	            }
	        }
	    }
	    int c=0;
	    for(int i=0;i<10;i++){
	        if(s[n-1][i]=='1'){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
