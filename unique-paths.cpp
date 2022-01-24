#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int unique_paths(int m, int n) {
	int path[m][n];
	for(int i=0; i<m; i++)
		path[0][i] = 0;
	for(int i=0; i<n; i++)
		path[i][0] = 0;
	
	for(int i=1; i<m; i++) {
		for(int j=1; j<n; j++) {
			path[i][j] = path[i-1][j] + path[i][j-1];
		}
	}
	
	return path[m-1][n-1];
}

void solve() {

	int m, n; cin >> m >> n;
	cout << unique_paths(m, n) << "\n";

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

