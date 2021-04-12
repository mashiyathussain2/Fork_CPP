#include<iostream>
using namespace std;
int main()
{
    int T; cin>> T;
    while(T--)
    {
        int n; cin>>n;
        
        int len[n+1];
        int glov[n+1];
        
        for(int i=1;i<n+1;i++)
        {
            cin>>len[i];
        }
        for(int i=1;i<n+1;i++)
        {
            cin>>glov[i];
        }
        
        int front=0;
        for(int i=1;i<n+1;i++)
        {
            if(len[i]<=glov[i])
            front++;
        }
        int back=0;
        for(int i=1;i<n+1;i++)
        {
            if(len[i]<=glov[n+1-i])
            back++;
        }
        if(front==n && back==n)
        cout<<"both"<<endl;
        else if(front !=n && back!=n)
        cout<<"none"<<endl;
        else if(front ==n && back!=n)
        cout<<"front"<<endl;
        else if(front!=n && back==n)
        cout<<"back"<<endl;
    }
return 0;
}
