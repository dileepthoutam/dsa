#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void match_strings(vector<string>& strings, vector<string>& queries) {
	unordered_map<string, int> hash_map;
	vector<int> res;
	for(auto x: strings)
		hash_map[x] += 1;
	for (auto x: queries) {
		if (hash_map.find(x) != hash_map.end())
			cout << hash_map[x] << endl;
		else
			cout << 0 << endl;
	}
}

void solve() {
	int n; cin >> n;
	vector<string> strings(n);
	for(auto& x: strings)
		cin >> x;
	
	int q; cin >> q;
	vector<string> queries(q);
	for(auto& x: queries)
		cin >> x;

	match_strings(strings, queries);

}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	srand(time(0));

	int tc=1;
	// cin >> tc;
	for(int t=1; t<=tc; t++) {
		// cout << "Case #" << t << ": ";
		solve();
	}


	return 0;
}


