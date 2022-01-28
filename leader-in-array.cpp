#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> leaders(int arr[], int n) {
	int max_right = arr[n-1];
	vector<int> res;
	res.push_back(max_right);

	for(int i=n-2; i>=0; i--) {
		if (arr[i] > max_right) {
			max_right = arr[i];
			res.push_back(max_right);
		}
	}
	reverse(res.begin(), res.end());
	return res;
}

void solve() {
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	vector<int> res = leaders(arr, n);
	for(auto x: res)
		cout << x << " ";
	cout << "\n";

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


