#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long a,n;
	cin >> n;
	string c;
	vector<string> b;
	for (int i=0;i<n;i++) {
		cin >> a;
		if (a != 2) {cin >> c; b.push_back(c);}
		else {
			cout << b[0] << '\n';
			b.push_back(b[0]);
			b.erase(b.begin());
		}
	}
	return 0;
}
