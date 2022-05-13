#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string a;
		int n,m;
		string all = "";
		int l = 0;
		cin >> n >> m;
		for (int i = 0;i<n;++i) {
			cin >> a;
			all+=a;
		}
		for (int i = 0;i<all.length();++i){
			if (a[i] != a[m + i])
				l += a[i] + a[m + i];
		}
		cout << l << '\n';
	}
	return 0;
}
