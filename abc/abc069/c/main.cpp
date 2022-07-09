#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int two = 0, four = 0;
	for(int i = 0;i < n;i++) {
		cin >> a[i];
		if(a[i]%4 == 0) {
			four++;
		}
		else if(a[i]%2 == 0) {
			two++;
		}
	}
	/* cout << "two" << two << endl;
	cout << "four" << four << endl; */
	if(two <= 1) {
		if(n / 2 <= four) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	else {
		n -= two;
		if(n == 1 && four == 0) {
			cout << "No" << endl;
			return 0;
		}
		if(n <= four * 2) {
			//cout << n << " " << four << endl;
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
