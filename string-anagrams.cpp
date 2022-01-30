#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int a_freq[26];
int b_freq[26];

bool is_anagram(string a, string b, int k) {

	for(auto x: a) {
		a_freq[x-'a'] += 1;
	}
	for(auto x: b) {
		b_freq[x-'a'] += 1;
	}

	int count = 0;
	for(int i=0; i<26; i++) {
		if (a_freq[i] != b_freq[i])
			count++;
	}


	return (count/2) == k;
}

void solve() {
	
	string a, b; 
	getline(cin, a);
	getline(cin, b);
	int k; cin >> k;

	cout << is_anagram(a, b, k) << endl;

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


