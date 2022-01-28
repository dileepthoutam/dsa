#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

// kadane's algorithm
int maximum_sum_subarray(const vector<int>& arr) {
	int local_sum = 0;
	int global_sum = INT_MIN;

	for(auto x: arr) {
		local_sum = max(local_sum + x, x);
		global_sum = max(global_sum, local_sum);
	}

	return global_sum;
}

void solve() {
	int n; cin >> n;
	vector<int> arr(n);
	
	for(auto& x: arr)
		cin >> x;

	int res = maximum_sum_subarray(arr);
	cout << res << endl;

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


