#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int i,n;
	cin>>i;
	n=i;
	long int m=0;
    long int a[i];
	long int a1[i];
	for(int j=0;j<i;j++)
	{
		cin>>a[j];
    }
	 sort(a , a+ i);
	 for(int j=0;j<i;j++)
	 {
	 	a1[j]=a[j]*n;
	 	n--;
	 }
	 for(int j=0;j<i;j++)
	 {
	 	if(m<a1[j])
	 	{
	 		m=a1[j];
	 	}
	 }
	  cout<<m<<endl;

return 0;
}
