#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (N%2!=0) {
    cout<<"Weird"<<endl;
    }
    else if(N%2==0 && N<=5){
     cout<<"Not Weird"<<endl;
    }
    else if(N%2==0 && N<=20){
     cout<<"Weird"<<endl;
    }
    else if(N%2==0 && N>20){
     cout<<"Not Weird"<<endl;
    }
    return 0;
}
