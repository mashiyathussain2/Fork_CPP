#include<iostream>
using namespace std;

int main()
{
  int n , A[100] , B[100] , avg1=1 , avg2=1 , p1 , p2 , sum=0 , sum1=0;
  cout<<"Enter the size of the two arrays";
  cin>>n;
  cout<<"Enter elements of array A";
  for(int i=0 ; i<n ; i++)
  {
     cin>>A[i];
  }
  
  cout<<"Enter elements of array B";
  for(int j=0 ; j<n ; j++)
  {
     cin>>B[i];
  }
  
    for(int i=0 ; i<n ; i++)
  {
     sum=sum+A[i];
  }
  
   for(int j=0 ; j<n ; j++)
  {
     sum1=sum1+B[j];
  }
  
  avg1=sum/n;
  avg2=sum1/n;
  p1=((sum)/(sum+sum1))*100;
  p2=((sum1)/(sum+sum1))*100;
  
  cout<<"Average value of array 1:"<<" "<<avg1;
  cout<<"Average value of array 2:"<< " "<< avg2;
  cout<<"Total average value of both arrays"<< " " << (avg1+avg2);
  cout<<"Array 1 makes up "<<" " <<p1<<"% of the total average value";
  cout<<"Array 2 makes up "<<" " <<p2<<"% of the total average value";
  
  return 0;
}
