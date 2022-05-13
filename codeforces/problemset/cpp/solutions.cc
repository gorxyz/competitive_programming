#include <bits/stdc++.h>
using namespace std;

void deletive_editing() {
	int c = 0;
	int g = 0;
	string s,t;
	string ans = "YES\n";
	cin >> s >> t;
	for(int j=0;j<t.length();++j){
		c = count(s.begin(), s.end(), t[j]); 
		g = count(t.begin(), t.end(), s[j]); 
		if (c > g)
			ans = "NO";
		break;
	}
	cout << ans << "\n";
}

void stones_on_the_table() {
	int n;
	cin >> n;
	int count = 0;
	string s;
	cin >> s;
	for (int i=0;i<s.length();++i)
		if (s[i] == s[i + 1])
			count++;
	cout << count << '\n';
}

void  array_balancing() {
	long long n;
	long long ans = 0;
	cin >> n;
	int a[n];
	int b[n];
	for(int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i)
		cin >> b[i];
	for (int i=0;i<n;++i)
		if (a[i] > b[i])
			swap(a[i], b[i]);
	for(int i=0;i<n-1;i++) ans += (abs(a[i] -a[i + 1]) + abs(b[i] - b[i + 1]));
	cout << ans << '\n';
}

void prof_slim() {
	int l = 0;
	int n;
	cin >> n;
	int a[n];
	for (int i =0;i<n ;i++){
		cin >> a[i];
		if (a[i] < 0)
			l++;
		a[i] =  abs(a[i]);
	}
	for(int j=0;j<n;j++){
		if (l == 0)
			break;
		l--;
		a[j] = -a[j];
	}
	int flag = 0;
	for (int i =1;i<n;++i)
		if (a[i] < a[i - 1]){
			flag = 1;
			break;
		}
	if (flag) cout << "NO\n";
	else cout << "YES\n";
}

void subtle_substring_subtraction() {
	string s;
	cin >> s;
	int n=s.length(),alice=0;
	for(int i=0;i<n;i++)
		alice += s[i]-'a'+1;
	if(n%2==0)
		cout << "Alice " << alice << '\n';
	else
	{
		int bob;
		if(s[0]<=s[n-1])
			bob = s[0]-'a'+1;
		else
			bob = s[n-1]-'a'+1;
		alice -= bob;
		if(alice > bob)
			cout << "Alice " << alice-bob << '\n';
		else if(alice < bob)
			cout << "Bob " << bob-alice << '\n';
	}
}

void number_transformation() {
	int x,y;
	cin >> x >> y;
	if (y % x != 0)
		cout << 0 << ' ' << 0 << '\n';
	else cout << 1 << ' ' << floor(y / x) << '\n';

}

void dictionary() {
	string s;
	cin >> s;
	string w = "aa";
    map<string, int> idx;
    int i = 1;
    for(w[0] = 'a'; w[0] <= 'z'; w[0]++)
        for(w[1] = 'a'; w[1] <= 'z'; w[1]++)
            if(w[0] != w[1])
                idx[w] = i++;
	cout << idx[s] << "\n";
}

void array_cloning_technique() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i=0;i<n;++i) {
		cin >> a[i];
		b[i] = a[i];
	}

}

void square() {
	long long n, m, a;
	cin >> n >> m >> a;
	cout << ((n + a - 1) / a) * ((m + a - 1) / a) << "\n";
}

void even_array() {
	int n; cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 2 != i % 2) {
			if ( i  % 2 == 0)
				a++;
			else b++;
		}
	}
	if (a != b) cout << -1 << '\n';
	else cout << a << "\n";
}

void word() {
	int upper,lowwer = 0;
	string s;
	cin >> s;
	string a;
	for (int i=0; i<s.length(); ++i) {
		if (isupper(s[i]))
			upper++;
		else lowwer++;
	}
	if (upper <= lowwer){
		for (int i=0;i<s.length();++i)
			a+=tolower(s[i]);
		cout << a << "\n";
	}
	if (upper > lowwer){
		for (int i=0;i<s.length();++i)
			a+=toupper(s[i]);
		cout << a << "\n";
	}
}

void boy_or_girl() {
	string s;
	cin >> s;
	unordered_map<char, int> m;
	for (int i = 0; i < s.length(); i++)
		m[s[i]]++;
	if (m.size() % 2 != 0)
		cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";
}

void marin_and_photoshoot() {
	int n; cin >> n;
	int count = 0;
	string s;
	cin >> s;
	for (int j=0;j<n;++j)
		if (s[j] == '0' && s[j + 1] == '0')
			count += 2;
	cout << count << "\n";	
}

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
	char s = 'x';
	s++;
	cout << s << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	//deletive_editing();
	int t;cin >> t;
	while(t--) deletive_editing();
	return 0;
}
