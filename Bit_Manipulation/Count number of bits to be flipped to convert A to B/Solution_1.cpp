#include <iostream>
using namespace std;

int countsetBits(int n){
    int count = 0;
    while(n>0){
        n &=(n-1);
        count++;
    }
    return count;
}
int FlippedCount(int a, int b){
    return countsetBits(a^b);
}


int main(){
	int a = 7;
	int b = 10;
	cout << FlippedCount(a, b)<<endl;
	return 0;
}
