#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void tower_of_hanoi(int disk, char source, char dest, char aux) {
	if (disk == 0)
		return;
	tower_of_hanoi(disk-1, source, aux, dest);
	cout << disk << " " << source << " " << dest << "\n";
	tower_of_hanoi(disk-1, aux, dest, source);	
}

void solve() {
	int disk; cin >> disk;
	tower_of_hanoi(disk, 'A', 'C', 'B');
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

