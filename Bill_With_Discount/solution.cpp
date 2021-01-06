#include<iostream>
using namespace std;
int main(){
    float billamount;
    float discount=0.0;

    cout<<"Enter the bill amount: ";
    cin>>billamount;
    if(billamount>=500)
         discount=billamount*20/100;
    else if (billamount>=100 && billamount<=500)
    {
        discount=billamount*10/100;
    }
    cout<<"Bill amount is "<<billamount<<endl;
    cout<<"Discount is "<<discount<<endl;
    cout<<"Discounted amount "<<billamount-discount<<endl;

    return 0;
}
