#include <iostream>
using namespace std;

int main()
{
    int n1 , n2;
    cin>>n1>>n2;

    if(n1>0 && n2>0)
    {
        if(max(n1,n2)%min(n1,n2)==0)
        {
            cout<<max(n1,n2)<<" "<<"is divisble by"<<" "<<min(n1,n2);
        }
        else
        {
            cout<<max(n1,n2)<<" "<<"is not divisble by"<<" "<<min(n1,n2);
        }
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
}
