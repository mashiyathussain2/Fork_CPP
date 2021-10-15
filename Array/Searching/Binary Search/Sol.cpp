#include<iostream> 
int loc=-1;
class search 
{
private : int n,i,ele,a[10];
public : void input();
         void binary(); 
         void output();
};

void search :: input()
{
cout<<"Enter the number of elements: "<<endl; 
cin>>n;
cout<<"Enter the array elements:\n"<<endl;
for(i=0;i<n;i++)
cin>>a[i]; 
}

void search :: output() 
{
if(loc>-1)
cout<<ele<<" is found in position \t" <<loc;
else
cout<<"\nelement is not found in the array.”;
}

void search :: binary() 
{
int mid;
low=0,high=n-1;
cout<<”Enter the element to be searched”; 
cin>>ele;
while (low<=high)
{
mid=(low+high)/2; if(ele==a[mid])
{
loc=mid;
break;
}
  
if (ele<a[mid]) high=mid-1;
else
low=mid+1;
}
}

int main()
{
search B;
B.input();
B.binary(); 
B.output();
return 0;
}
