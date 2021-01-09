#include<iostream>
using namespace std;
int main(){
    int A[7]={1,2,3,4,5,6,7};
    int n=7,sum=0;
    for (int i = 0; i < 7; i++)  // using for each loop write  for(int x:A)
    {
        sum=sum+A[i];      // and here sum=sum+x 
    } 
    cout<<"Sum is "<<sum;
    return 0;
    
}
