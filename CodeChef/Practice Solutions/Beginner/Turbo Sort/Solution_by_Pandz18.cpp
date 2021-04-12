#include <bits/stdc++.h> 
#include <iostream>
using namespace std;   

int main() 
{ 
 int n;
 cin >> n;
 int i,j;
 int a[n];
  for(i=0;i<n;i++)
    {
        cin >> a[i];
        
    }


sort(a, a+n); 
for (int i = 0; i < n; ++i) 
cout << a[i] << "\n";   
return 0; 
} 
