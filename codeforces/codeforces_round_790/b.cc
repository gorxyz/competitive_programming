#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		vector<int> a(n);
		long long sum = 0;
		for (int i=0;i<n;++i)
			cin >> a[i];
		sort(a.begin(),a.end());
		for (int j =0;j<n;++j)
			while (a[j] != a[0]){
				a[j]--;
				sum++;
			}
		cout << sum << '\n';
	}
	return 0;
}
