#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

int partition(int arr[], int start, int end) {
	int pivot = arr[end];
	int i = start - 1;
	for(int j=start; j<end; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[end]);
	return i+1;
}

void quick_sort(int arr[], int start, int end) {
	int index;
	if (start < end) {
		index = partition(arr, start, end);
		quick_sort(arr, start, index-1);
		quick_sort(arr, index+1, end);
	}
}

void solve() {
	int n; cin >> n;
	int arr[n];
	for(auto& x: arr) cin >> x;
	quick_sort(arr, 0, n-1);
	for(auto& x: arr) cout << x << " ";
	cout << endl;
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


