#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

vector<int> grading_students(vector<int>& grades) {
	for(auto& grade: grades) {
		int upgraded = (ceil(grade/5)+1)*5;
		// cout << upgraded << endl;
		if (grade < 38) continue;
		if (upgraded - grade < 3) grade = upgraded;
	}
		
	return grades;
}

void solve() {
	int n; cin >> n;
	vector<int> grades(n);
	for (auto& grade: grades) 
		cin >> grade;

	grades = grading_students(grades);
	for (auto grade: grades) 
		cout << grade << " ";
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


