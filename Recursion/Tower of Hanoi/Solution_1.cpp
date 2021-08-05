#include<iostream>
using namespace std;

void Tower(int n, char src, char helper, char dest){
    if(n==0){
        return;
    }
    Tower(n-1, src, dest, helper);
    cout<<"Shift disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    Tower(n-1,helper, src, dest);
}
int main(){
    int n;
    cin>>n;
    Tower(n,'A','B','C');
    return 0;
}
