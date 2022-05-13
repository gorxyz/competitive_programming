#include <bits/stdc++.h>
using namespace std;
 
#define ar array
#define ll long long
#define ld long double
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long n,m;
	cin >> n >> m;
	if (n % m == 0) 
		cout << n / m << "\n";
	else 
		cout << n / m  + 1<< "\n";
	return 0;
}
