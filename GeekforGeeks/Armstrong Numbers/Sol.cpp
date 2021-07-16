#include <iostream>
using namespace std;

int main() 
{
    int n, a, rem, res = 0;
    cin >> n;
    a = n;

    while (a != 0) 
    {   
       rem = a % 10; 
       res += rem * rem * rem;
       a /= 10;
    }

    if (res == n)
        cout << n << " is an Armstrong number";
    else
        cout << n << " is not an Armstrong number";

    return 0;
}
