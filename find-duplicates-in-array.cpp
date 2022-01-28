#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> find_duplicates(int arr[], int n) {
	unordered_set<int> hash_set;
	vector<int> res;

	for(int i=0; i<n; i++) {
		if (hash_set.find(arr[i]) != hash_set.end())
			res.push_back(arr[i]);
		else
			hash_set.insert(arr[i]);
	}

	return res;
}

void solve() {
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];

	vector<int> res = find_duplicates(arr, n);
	for(auto x: res)
		cout << x << " ";
	cout << endl;
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


