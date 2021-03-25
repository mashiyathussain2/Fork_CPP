#include <iostream>

using namespace std;

int main()
{
    int t; 
    cin>>t;  
    while(t--){  
        int n; 
        cin>>n; 
        string s,r; 
        cin>>s>>r; 
        int ans=0,ans_1=0; 
        for(int i=0;i<n;i++){ 
            if(s[i]=='1') 
            ans++; 
            if(r[i]=='1')
            ans_1++; 
        } 
        if(ans==ans_1)
        cout<<"YES"<<endl; 
        else
        cout<<"NO"<<endl;
    }
        
    

    return 0;
}
