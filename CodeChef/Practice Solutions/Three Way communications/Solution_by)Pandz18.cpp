#include<bits/stdc++.h>

using namespace std;

bool calc(int x,int y,int r){
	return (x*x)+(y*y)<=r*r;
}

int main(){
	int t;
	cin>>t;

	int x[3];
	int y[3];
	while(t--){
		int r;
		cin>>r;
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		int s=0;
		if(calc((x1-x2),(y1-y2),r))
				s++;
		if(calc((x3-x2),(y3-y2),r))
				s++;
		if(calc((x3-x1),(y3-y1),r))
				s++;

		if(s>1)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}

	return 0;
}
