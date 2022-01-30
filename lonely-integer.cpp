#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int lonely_integer(vector<int>& arr) {
	int n = arr.size();
	int sum_arr = 0;
	int sum_unique = 0;
	unordered_set<int> hash_set;
	
	for(auto x: arr) {
		sum_arr += x;
		if (hash_set.find(x) == hash_set.end()) {
			sum_unique += x;
			hash_set.insert(x);
		}
	}

	return 2 * sum_unique - sum_arr;	
}

void solve() {
	int n; cin >> n;
	vector<int> arr(n);
	for(auto &x: arr)
		cin >> x;

	cout << lonely_integer(arr) << endl;

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


