#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

bool sort_check(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		if (arr[i] > arr[i+1])
			return false;
	}
	return true;
}

int maximum_value(int arr[], int n) {
	int res = INT_MIN;
	for(int i=0; i<n; i++)
		res = max(res, arr[i]);
	return res;
}

int minimum_value(int arr[], int n) {
	int res = INT_MAX;
	for(int i=0; i<n; i++)
		res = min(res, arr[i]);
	return res;
}

void reverse_array(int arr[], int n) {
	int start = 0;
	int end = n - 1;
	while (start <= end) {
		swap(arr[start++], arr[end--]);
	}
}

void solve() {
	int n; cin >> n;
	int arr[n];
	for(auto& x: arr) 
		cin >> x;
	cout << sort_check(arr, n) << "\n";

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

