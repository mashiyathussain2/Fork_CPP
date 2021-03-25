#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	string a;
          cin>>a;
	while(t--)
	{
          string s;
          getline(cin,s);
		int flag=0;
		stringstream str(s);
		string word;
		while(str >> word)
		{
			if(word == "not"){
			flag = 1;
			break;
			}
		}
		
	if(flag==1){
		cout<<"Real Fancy"<<endl;}
		else{
        cout<<"regularly fancy"<<endl;}}
}
