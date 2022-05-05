#include <bits/stdc++.h>
using namespace std;

void vlad_and_candies () {
	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;++i)
		cin >> a[i];
	sort(a.begin(), a.end());
	if (n == 1){
		if (a[0] > 1)
			cout << "YES\n";
		else cout << "NO\n";
	}
	if (a[n - 2] + 1 < a[n - 1])
		cout << "NO\n";
	else cout << "YES\n";
}

void deletions_of_two_adjacent_letters() {
	string s;
	cin >> s;
	string c;
	cin >> c;
	bool yes = false;
	for (int i=0;i<s.length();++i)
		if (s[i] == c[0] && i % 2 == 0)
			yes = true;
	cout << (yes ? "YES" : "NO") << "\n";

}

void marin_and_anti_coprime_permutation() {
	const int MOD = 998244353;
	int n; cin >> n;
	if (n & 1) {
		cout << "0\n";
		return;
	}
	long long ans = 1;
	for (int i = 1; i <= n / 2; ++i) {
		ans *= 1LL * i * i % MOD;
		ans %= MOD;
	}
	cout << ans << '\n';
}

void integer_moves() {
	int t; cin >> t;
	while(t--) {
		int x,y;
		cin >> x >> y;
		int d = x * x + y * y;
		int r = 0;
		while (r * r < d) ++r;
		int ans = 2;
		if (r * r  == d) ans = 1;
		if (x == 0 && y == 0) ans = 0;
		cout << ans << "\n";
	}
}

void gcd_vs_lcm () {
	int t; cin>> t;
	while (t--) {
		int n; cin >> n;
		cout << n - 3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << "\n";
	}
}

void social_distance() {
	int t; cin >> t;
	while (t--) {
		int n,m;
		cin >> n >> m;
		vector<int> a(n);
		string ans="YES";
		for(int j=0;j<n;j++) {
			cin >> a[j];
			if (n > m) {
				ans="NO\n";
				break;
			}
		}
		cout << ans << '\n';
	}
}

void odd_even_increments() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int even1 = 0,even2 = 0, odd1 = 0 ,odd2 = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i % 2 == 0) {
				if (a[i] % 2 == 1) odd1 = 1;
				else even1 = 1;
			} else {
				if (a[i] % 2 == 0) odd2=1;
				else even2 = 1;
			}
		}
		if (even1 && odd1) cout << "NO\n";
		else if (even2 && odd2) cout << "NO\n";
		else cout << "YES\n";
	}
}

void string_building() {
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool ans = true;
		for (int i=0;i<s.length(); ++i) {
			if ((i == 0 || s[i] != s[i -1]) && (i == s.length() - 1 || s[i] != s[i + 1]))
				ans = false;
		}
		if (ans) cout << "YES\n";
		else cout << "NO\n";
	}
}

void triple() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
    	vector<int> cnt(n + 1, 0);
    	int ans = -1;
    	for(int i = 0; i < n; i++) {
    		int x; cin >> x;
    		if(++cnt[x] >= 3) {
    			ans = x;
    		}
    	}
		cout << ans << "\n";
	}
}

void i_love_aaab() {
	int t; cin >> t;
	for (int i=0;i<t;i++){
		string s;cin >> s;
		if (s[0] != 'A' || s[s.length() - 1] != 'B' || s.length() == 1) {
			cout << "NO\n";
			continue;
		}
		int flag = 0;
		int count = 1;
		for (int j=1;j<s.length();++j){
			if (s[j] == 'B')
				count--;
			else count++;
			if (count < 0) {
				flag = 1;
				break;
			}
		}
		if (flag) cout << "NO\n";
		else cout << "YES\n";
	}
}

void log_chopping() {
	int t;cin >> t;
	for (int i=0;i<t;i++){
		int n;cin >> n;
		int sum = 0;
		int a[n];
		for (int j=0;j<n;++j) {
			cin >> a[j];
			sum += a[j];
		}
		sum -= n;
		if (sum  % 2 ==0 )
			cout << "maomao90\n";
		else cout << "errorgorn\n";
	}
}

void test() {
	vector<int> a = { 1, 2, 3, 4};
	cout << a[a.size() - 1] << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t; cin >> t;
	test();
	//while (t--) vlad_and_candies();
	return 0;
}
