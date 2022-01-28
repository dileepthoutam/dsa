#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

bool palindrome_check(string s, int start, int end) {
	if (s[start] != s[end])
		return false;
	if (start == end)
		return true;
	return palindrome_check(s, start+1, end-1);
}

void solve() {
	string s;
	getline(cin, s);
	bool res = palindrome_check(s, 0, s.size()-1);
	cout << res << "\n";
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc=1;
	// cin >> tc;
	for(int t=1; t<=tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}


	return 0;
}

