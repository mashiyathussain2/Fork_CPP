#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
    while(T--)
    {
        int num;
        cin >> num;
        if(num < 2)
        {
            cout << 1 << endl;
            continue;
        }
        int carry = 0;
        int temp;
        int digit = 1;
        int fac[200] = {0};
        
        fac[0] = 1;
        
        for (int i=2; i <= num; i++)
        {
            for(int j=0; j < digit; j++)
            {
                temp = i * fac[j] + carry;
                fac[j] = temp % 10;
                carry = temp / 10;
            }
            while(carry)
            {
                fac[digit] += carry % 10;
                carry /= 10;
                digit++;
            }
        }
        while(digit)
            cout << fac[--digit];
        cout << endl;
    }
    return 0;
}
