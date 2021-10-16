#include <iostream>
using namespace std;

int main()
{
    int i, n , t;
    float arr[100];
    
   cin>>t;
  if(t>0)
  {
  while(t--)
  {
    cout << "Enter total number of elements : "<<endl;
    cin >> n;
 
    if(n>0)
    {
    // Store number entered by the user
    cout << "Enter Numbers "<<endl;
    for(i = 0; i < n; ++i)
    {
       cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Maximum integer in array :  " << arr[0]<<endl;
  }
  else if(n==0)
  {
    cout<<"0"<<endl;
  }
  else
  {
    cout<<"Invalid size"<<endl;
  }
  }
  }
  else
  {
    cout<<"invalid number"<<endl;
  }
    return 0;
}
