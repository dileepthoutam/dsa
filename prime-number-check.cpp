#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

bool prime_check(int n) {
	if (n < 2)
		return 0;
	for(int i=2; i*i<=n; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}

void solve() {
	int n; cin >> n;
	cout << prime_check(n) << "\n";
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

