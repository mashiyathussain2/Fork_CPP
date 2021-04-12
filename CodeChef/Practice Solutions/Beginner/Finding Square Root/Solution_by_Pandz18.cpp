#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
    float number;
    cin>>number;
    float sq= sqrt(number);
    int sol = abs(sq);
    cout<<sol<<"\n";
}
	return 0;
}
