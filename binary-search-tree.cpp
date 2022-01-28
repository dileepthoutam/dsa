#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ar array

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int inf = 1e18;

struct Node {
	int value;
	struct Node* left;
	struct Node* right;
	Node(int value) {
		this->value = value;
		this->left = nullptr;
		this->right = nullptr;
	}
};

Node* insert_node(Node* root, int value) {
	if (root == nullptr)
		return new Node(value);
	else if (value < root->value)
		root->left = insert_node(root->left, value);
	else if (value > root->value)
		root->right = insert_node(root->right, value);
	return root;
}

void inorder(Node* root) {
	if (root == nullptr)
		return;
	inorder(root->left);
	cout << root->value << " ";
	inorder(root->right);
}

void level_order(Node* root) {
	queue<Node*> q;
	q.push(root);
	
	while (!q.empty()) {
		Node* node = q.front();
		q.pop();
		cout << node->value << " ";
		if (node->left)
			q.push(node->left);
		if (node->right)
			q.push(node->right);
	}
	cout << '\n';
}

void solve() {

	Node* root = nullptr;
	for(int i=1; i<=6; i++)
		root = insert_node(root, rand()%100);
	inorder(root); cout << '\n';
	level_order(root);

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


