#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> breaking_records(vector<int>& scores) {
	int mx = scores[0];
	int mn = scores[0];
	int mx_count = 0;
	int mn_count = 0;
	
	for(auto score: scores) {
		if (score > mx) {
			mx = score;
			mx_count++;
		}
		if (score < mn) {
			mn = score;
			mn_count++;
		}
	}
	
	return {mx_count, mn_count};
}

void solve() {
	int n; cin >> n;
	vector<int> scores(n);
	for(auto& score: scores)
		cin >> score;

	vector<int> res = breaking_records(scores);
	cout << res[0] << " " << res[1] << endl;

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


