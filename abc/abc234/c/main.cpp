#include <bits/stdc++.h>
using namespace std;

void solve(long long k);

int main() {
	long long k, tmp;
	cin >> k;
	int digit=0;
	tmp = k;
	while(tmp != 0) {
		tmp /= 10;
		digit++;
	}
	if (digit == 0) {
		cout << 0 << endl;
	} else {
		solve(k);
		cout << endl;
	}
}

void solve(long long k) {
	if (k == 1) {
		cout << 2;
		return;
	}
	solve(k/2);
	if (k % 2 == 0) {
		cout << 0;
	} else {
		cout << 2;
	}
}