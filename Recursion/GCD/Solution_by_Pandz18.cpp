#include <iostream>
using namespace std;

int main()
{
    int n1, n2, GCD;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if(n1>0 && n2>0)
    {
        if ( n2 > n1 ) {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
        }
    
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            GCD = i;
        }
    }
      cout << "GCD of the two numbers is : " << GCD;
    }
    else if(n1==0 || n2==0)
    {
        cout<<max(n1, n2);
    }
    else if( n1==0 && n2==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"invalid";
    }
  
    return 0;
}
