#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,m;
		int sum = 0;
		cin >> n >> m;
		int a[m];
		for( int i =0 ;i <n;++i) {
			for (int j = 0; j < m ; ++j ){
				cin >> a[j];
				if (j == 0)
					sum += a[j];
			}
		}
	}
	return 0;
}
