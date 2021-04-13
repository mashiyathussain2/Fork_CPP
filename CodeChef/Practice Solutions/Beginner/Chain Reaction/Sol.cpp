#include<bits/stdc++.h>
using namespace std;
#define en  "\n"
#define ll  long long int
#define test int t;  cin>>t; while(t--)

 int a[13][13];
 
int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
          test{
              ll m,n,c=0;
              cin>>n>>m;
              for(ll i=1;i<=n;i++){
                  for(ll j=1;j<=m;j++){
                      cin>>a[i][j];
                  }
              }
              for(ll i=1;i<=n;i++){
			for(ll j=1;j<=m;j++){
				if((i==1) || (i==n)){
					if((j==1) || (j==m)){
						
						if(a[i][j]>=2)
							c++;
					}
					else{
						
						if(a[i][j]>=3)
							c++;
					}
				}
				else{
					if((j==1) || (j==m)){
					
						if(a[i][j]>=3)
							c++;
					}
					else{
						
						if(a[i][j]>=4)
							c++;
					}
				}
			}
		}
		if(c==0){
		    cout<<"Stable"<<en;
		}
		else{
		    cout<<"Unstable"<<en;
		}
              
              
          }
   
      return 0;
}
