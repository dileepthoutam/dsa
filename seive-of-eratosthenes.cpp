#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> seive(maxn, 0);

void solve() {
	vector<int> res;
	int n; cin >> n;
	for(int i=2; i<=n; i++) {
		for(int j=i*2; j<=n; j+=i) {
			if (!seive[j])
				seive[j] = i;
		}
		if (!seive[i])
			res.push_back(i);
	}

	for(auto x: res)
		cout << x << " ";
	cout << "\n";
	cout << "size: " << res.size() << "\n";
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

