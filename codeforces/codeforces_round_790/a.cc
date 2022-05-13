#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	string a;
	while (t--) {
		cin >> a;
		if (a[0] + a[1] + a[2] == a[a.size() - 1] + a[a.size() - 2] + a[a.size() - 3])
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
