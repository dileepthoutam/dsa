#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int sum_of_digits(int number) {	
	if (number == 0)
		return 0;
	return number%10 + sum_of_digits(number/10);
}

void solve() {
	int number; 
	cin >> number;

	cout << sum_of_digits(number) << "\n";
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

