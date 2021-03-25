#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,u,d;
	    cin>>n>>u>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int chance=1;
	    int c=1;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>arr[i-1])
	        {
	            if(abs(arr[i]-arr[i-1])<=u)
	            {
	                c++;
	            }
	            else 
	            {
	                break;
	            }
	        }
	        else
	        {
	            if(abs(arr[i]-arr[i-1])<=d)
	            {
	                c++;
	                
	            }
	            else
	            {
	                if(chance==1)
	                {
	                    c++;
	                    chance=0;
	                }
	                else
	                {
	                    break;
	                }
	            }
	        }
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}
