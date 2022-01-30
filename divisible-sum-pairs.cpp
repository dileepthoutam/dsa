#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int divisible_sum_pairs(vector<int>& arr, int n, int k) {
	int count = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (i < j && (arr[i]+arr[j])%k == 0)
				count++;
		}
	}
	return count;
}

void solve() {
	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for(auto &x: arr) cin >> x;
	int count = divisible_sum_pairs(arr, n, k);
	cout << count << endl;
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


