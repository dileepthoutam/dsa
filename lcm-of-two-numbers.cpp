#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a*b)/gcd(a, b);
}

void solve() {
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b) << "\n";
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

