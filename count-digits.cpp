#include <bits/stdc++.h>
using namespace std;

int count_digits(int n) {
	int count = 0;
	while (n) {
		n = n/10;
		count++;
	}
	return count;
}

int count_digits_rec(int n) {
	if (!n) return 0;
	return 1 + count_digits_rec(n/10);
}

int count_digits_log(int n) {
	return ceil(log10(n));
}

int main() {

	int n; scanf("%d", &n);
	printf("%d\n", count_digits(n));
	printf("%d\n", count_digits_log(n));
	printf("%d\n", count_digits_rec(n));


	return 0;
}

