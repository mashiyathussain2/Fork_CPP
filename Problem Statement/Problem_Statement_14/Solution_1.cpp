#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 42) {
            break;
        }
        cout << n <<endl;
    }
    return 0;
}