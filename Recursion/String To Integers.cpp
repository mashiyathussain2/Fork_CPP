#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int StringToInt(char *a, int n){
    // base case
    if(n==0){
        return 0;
    }
    // recursive case
     int digits = a[n-1] - '0';
     int sub_problems = StringToInt(a, n-1);
     return sub_problems*10 + digits;
}
int main(){
    char a[] = "123";
    int len = strlen(a);
    int c = StringToInt(a, len);
    cout<<c<<endl;
    // add one to ans to show that it is int 
    cout<<c+1<<endl;

}
