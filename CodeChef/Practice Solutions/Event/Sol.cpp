#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s, e;
		int l, r;
		cin >> s >> e >> l >> r;
		string days[] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday", "friday"};
		int start = 0;
		int end = 0;
		for (int i = 0; i < 7; i++) {
			if (s == days[i]) {
				start = i;
			}
			if (e == days[i]) {
				end = i;
			}
		}
		int diff = (end - start + 1 + 7) % 7;
		int ans = -1;
		int cnt = 0;
		for (int i = 0; i < 100; i++) {
			if (diff >= l && diff <= r) {
				cnt++;
				ans = diff;
			}
			diff += 7;
		}
		if (cnt > 1) {
			cout << "many";
		} else if (cnt == 0) {
			cout << "impossible";
		} else {
			cout << ans;
		}
		cout << '\n';
	}
	return 0; 
}
