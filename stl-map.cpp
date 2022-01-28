#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void print_map(const map<int, int>& m) {
	for(auto it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;
	cout << endl;
}

void solve() {
	int arr[] = {1,1,2,2,2,3,3,3,4,5,5,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	map<int,int> m;
	for(int i=0; i<n; i++)
		m[arr[i]] += 1;

	print_map(m);
	cout << m.max_size() << "\n";
	cout << m.size() << endl;
	cout << (!m.empty()) << endl;
	m.erase(2);
	print_map(m);

	m.erase(2);
	print_map(m);
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


