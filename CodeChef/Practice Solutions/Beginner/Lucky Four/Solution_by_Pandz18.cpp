#include<iostream>



using namespace std;
void solve() {
  int n; cin >> n;
  int temp=n;
  int count=0;
  while(temp!=0) {
    if(temp%10==4) count++;
    temp/=10;
  }
  
  cout << count << endl;
  
}


int main() {
  
  int t; cin >> t;
  while(t--)
    solve();

  return 0;
}
