#include<iostream>
using namespace std;

int main(){
    float x = 1.0;
    int people = 0;
    float num = 365;
    float denom = 365;

    float p;
    cin>>p;
    if(p==1.0){
        cout<<"366"<<endl;
        return 0;
    }
    while(x>1-p){
        x=x*(num)/denom;
        num--;
        people++;
        cout<<"People"<<people<<" and "<<x<<endl;
    }
}
