#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i=0;i<t;++i) {
		int x,y;
		cin >> x >> y;
		if (x * 3 > y * 2) 
			cout << y * 2 << "\n";
		else cout << x * 3 << "\n";
	}

	return 0;
}
