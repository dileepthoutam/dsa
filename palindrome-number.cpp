#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n) {
	int temp = n;
	int rev_num = 0;
	while (n) {
		rev_num = rev_num * 10 + n%10;
		n = n/10;
	}
	return rev_num == temp;
}

int main() {

	int n; scanf("%d", &n);
	printf("%d\n", is_palindrome(n));



	return 0;
}

