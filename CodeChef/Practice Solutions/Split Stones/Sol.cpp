#include <bits/stdc++.h>
using namespace std;

int main()
{

	int T;
	cin >> T;
	while(T--) {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	int mini = a;
	if(b < mini)
	    mini = b;
	if(c < mini)
	    mini = c;
	if(min(x, y) < mini)
	    cout << "NO";
	else if(x + y != a + b + c)
	    cout << "NO";
	else
	    cout << "YES";
	cout << endl;
	}
	return 0;
}
