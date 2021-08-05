#include<iostream>
using namespace std;

int knapsack(int N, int C, int*wt, int *prices){
    if(N==0 || C==0){
        return 0;
    }
    int ans = 0;
    int inc, exc;
    inc = exc = 0;

    // inc
    if(wt[N-1] <= C){
        inc = prices[N-1] + knapsack(N-1, C-wt[N-1], wt, prices);
    }
    // exc
    exc = knapsack(N-1, C, wt, prices);

    ans = max(inc, exc);
    return ans;
}

int main(){
    int N;
    cin>>N;
    int C;
    cin>>C;
    int weigths[] = {1,2,3,4,5};
    int prices[] = {40,20,30,10,100};
    cout<<knapsack(N,C,weigths,prices);
    return 0;
}
