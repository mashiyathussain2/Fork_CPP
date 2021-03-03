#include <iostream>
using namespace std;

int main()
{
    int N  , i , perm=1;
    cout<<"Input value of N";
    cin>>N;

    for(i=N ; i>0 ; i--)
    {
        perm=perm*i;
    }
    cout<<N<<"! ="<<" " <<perm;
    return 0;
}
