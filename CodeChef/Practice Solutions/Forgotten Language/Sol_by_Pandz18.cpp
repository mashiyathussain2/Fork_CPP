#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long int l;
#define loop(n1) for(ll i=0;i<n1;i++)
#define pb push_back
#define ppb pop_back
#define pb push_back
#define mp make_pair
#define debug(n) cout<<n<<endl
#define mod 1000000007
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,x;
		cin>>n>>k;
		string s;
		vector<string> flang,mlang;
		
		loop(n)
		{
			cin>>s;
			flang.push_back(s);
		}
		loop(k)
		{
			cin>>x;
			loop(x)
			{
				cin>>s;
				mlang.push_back(s);
			}
			
			
		}
		sort(mlang.begin(),mlang.end());
		
		for(auto word:flang)
			{	int flag=0;
				for(auto mw:mlang)
				{
					if(word==mw)
					{cout<<"YES"<<" ";flag=1;break;}
				}
				if(flag==0)
				cout<<"NO"<<" ";
			}
		
		cout<<endl;
	}
			
		
		
			
	return 0;
}
