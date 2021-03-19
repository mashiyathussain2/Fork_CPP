#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string output  ="NO";
	    for(int i=0;i<s.length();i++)
	    {
	        int a  = count(s.begin(),s.end(),s[i]);
	        int b = s.length()-a;
	    
	    if(a==b)
	    {
	        output ="YES";
	    }
	 }
	cout<<output<<endl;
	}
	return 0;
}
