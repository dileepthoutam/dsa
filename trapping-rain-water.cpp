#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int max_water(vector<int> arr, int n) {
	int left[n], right[n];
	int water = 0;
	left[0] = arr[0];
	for(int i=1; i<n; i++)
		left[i] = max(left[i-1], arr[i]);
	right[n-1] = arr[n-1];
	for(int i=n-2; i>=0; i--)
		right[i] = max(right[i+1], arr[i]);

	for(int i=1; i<n-1; i++) {
		if (min(left[i], right[i]) > arr[i])
			water += min(left[i], right[i]) - arr[i];
	}

	return water;
}

void solve() {

	int n; cin >> n;
	vector<int> arr(n);
	for(auto& x: arr)
		cin >> x;

	int water = max_water(arr, n);
	cout << water << "\n";

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

