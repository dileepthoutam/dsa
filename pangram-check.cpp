#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int temp[26];

string pangram_check(string& s) {
	for(char ch: s) {
		ch = tolower(ch);
		temp[ch-'a'] += 1;
	}
	
	for(int i=0; i<26; i++) {
		if (temp[i] == 0)
			return "not pangram";
	}
	return "pangram";
}

void solve() {
	string s; 
	getline(cin, s);

	cout << pangram_check(s) << endl;

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


