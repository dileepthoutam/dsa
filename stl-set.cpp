#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void print_set(const set<int>& s) {
	for(auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << "\n";
}

void print_set_reverse(const set<int>& s) {
	for(auto it = s.rbegin(); it != s.rend(); it++)
		cout << *it << " ";
	cout << endl;
}

void solve() {

	set<int> s;
	// insert() function to insert element into the set
	for(int i=5; i>=0; i--)
		s.insert(i);

	// demonstrates iterators begin(), end(), rbegin(), rend()
	print_set(s);
	print_set_reverse(s);

	// erase to remove the element 3 from the set
	s.erase(3);
	print_set(s);

	// clear() function to clear the set
	// s.clear();
	// print_set(s);

	// find() example
	// if found, returns an iterator to the element, else returns
	// an iterator to the end()
	if (s.find(4) != s.end())
		cout << "found\n";
	else 
		cout << "not found\n";

	if (s.find(3) != s.end())
		cout << "found\n";
	else
		cout << "not found\n";

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


