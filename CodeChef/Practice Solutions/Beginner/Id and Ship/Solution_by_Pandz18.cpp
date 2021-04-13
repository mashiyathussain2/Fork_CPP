#include <iostream>
using namespace std;

int main() 
{
    int t ;
    char c;
	cin>>t;
	while(t--)
	{
	    cin>>c;
	    if(c=='B'||c=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(c=='C'||c=='c')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else if(c=='D'||c=='d')
	    {
	        cout<<" Destroyer"<<endl;
	    }
	    else if(c=='F'||c=='f')
	    {
	        cout<<"Frigate"<<endl;
	    }
	    else
	    {
	        cout<<"Invalid";
	    }
	    
	}
	return 0;
}
