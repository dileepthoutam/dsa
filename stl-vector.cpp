#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void print_vector(const vector<int>& arr) {
	for(auto it = arr.begin(); it != arr.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void solve() {
	vector<int> arr;
	for(int i=1; i<=5; i++)
		arr.push_back(i);
	
	/*cout << arr.size() << endl;
	cout << arr.max_size() << endl;
	cout << arr.capacity() << endl;
	cout << arr.empty() << endl;

	cout << arr[3] << endl;
	cout << arr.at(3) << endl;
	cout << arr.front() << endl;
	cout << arr.back() << endl;*/

	vector<int> v;
	v.assign(5, 10); // fill the array with 10 five times 
	print_vector(v);

	v.push_back(11);	
	print_vector(v);
	v.pop_back();
	print_vector(v);

	
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


