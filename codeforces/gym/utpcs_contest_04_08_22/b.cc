#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int l = 0;
	int n,k;
	cin >> n >> k;
	for (int i=1;i<=n;i++) {
		if ( i % k == 0 && i % (k * k) != 0)
			l++;
	}
	cout << l << "\n";
	return 0;
}

