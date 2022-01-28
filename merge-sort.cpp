#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

void merge(int arr[], int start, int mid, int end) {
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int arr1[n1], arr2[n2];

	for(int i=0; i<n1; i++)
		arr1[i] = arr[start + i];
	for(int j=0; j<n2; j++)
		arr2[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = start;
	while (i < n1 && j < n2) {
		if (arr1[i] < arr2[j])
			arr[k++] = arr1[i++];
		else
			arr[k++] = arr2[j++];
	}
	while (i < n1)
		arr[k++] = arr1[i++];
	while (j < n2)
		arr[k++] = arr2[j++];
}

void merge_sort(int arr[], int start, int end) {
	int mid;
	if (start < end) {
		mid = start + (end-start)/2;
		merge_sort(arr, start, mid);
		merge_sort(arr, mid+1, end);
		merge(arr, start, mid, end);
	}
}

void solve() {

	int n; cin >> n;
	int arr[n];
	for(auto& x: arr) cin >> x;
	merge_sort(arr, 0, n-1);
	for(auto& x: arr) cout << x << " ";
	cout << "\n";
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


