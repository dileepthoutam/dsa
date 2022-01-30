#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array
#define endl '\n'

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

struct TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) {
		this->val = val;
		this->left = nullptr;
		this->right = nullptr;
	}
};

bool is_valid_bst(TreeNode* root, int min_key, int max_key) {
	if (root == nullptr)
		return true;
	if (root->val < min_key || root->val > max_key)
		return false;
	return is_valid_bst(root->left, min_key, root->val) &&
		   is_valid_bst(root->right, root->val, max_key);
}

void solve() {

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


