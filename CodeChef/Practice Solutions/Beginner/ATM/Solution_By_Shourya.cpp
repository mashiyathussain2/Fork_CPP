//Solution of ATM in Code Chef

#include <iostream>
using namespace std;

int main() {
	int amt;
	float bal;
	cin>>amt;
	cin>>bal;
	if((bal>=(amt+0.50)) && (amt%5 == 0)){
	    printf("%.2f\n", bal-amt-0.50);
	}
	else{
	    printf("%.2f\n", bal);
	}
	return 0;
}
