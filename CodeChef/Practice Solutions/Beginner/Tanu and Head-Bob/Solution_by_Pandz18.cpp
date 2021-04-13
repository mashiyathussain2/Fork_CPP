
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int y=0,n=0,i=0,x;
        cin>>x;
        cin>>s;
        for(int j=0;j<x;j++)
        {
            if(s[j]=='N') { n++; }
            if(s[j]=='Y') { y++; }
            if(s[j]=='I') { i++; }
        }
        if(i!=0)
        {
            cout<<"INDIAN"<<endl;
        }
        else if(i==0 && y!=0)
        {
            cout<<"NOT INDIAN"<<endl;
        }
        else
        {
            cout<<"NOT SURE"<<endl;
        }
    }
    return 0;
}
