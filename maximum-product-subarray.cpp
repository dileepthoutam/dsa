#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int maximum_product_subarray(const vector<int>& arr) {
	int local_min_prod = arr[0];
	int local_max_prod = arr[0];
	int global_max_prod = arr[0];

	for(int i=1; i<arr.size(); i++) {
		int temp = local_max_prod;
		local_max_prod = max3(arr[i], arr[i]*local_max_prod, arr[i]*local_min_prod);
		local_min_prod = min3(arr[i], arr[i]*local_min_prod, arr[i]*temp);
		global_max_prod = max(global_max_prod, local_max_prod);
	}

	return global_max_prod;
}

void solve() {
	int n; cin >> n;
	vector<int> arr(n);
	for(auto &x: arr)
		cin >> x;

	int res = maximum_product_subarray(arr);
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


