#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void solve() {
	int n; cin >> n;
	int arr[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}

	int primary = 0;
	int secondary = 0;

	for(int i=0; i<n; i++) {
		primary += arr[i][i];
	}

	int i=0, j=n-1;
	while (j >= 0 && i < n) {
		secondary += arr[i][j];
		j--; i++;
	}

	cout << abs(primary - secondary) << endl;

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


