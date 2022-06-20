#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, m, s;
	cin >> n;
	h = n / 3600;
	m = n % 3600 / 60;
	s = n % 60;
	if (h < 10) {
		cout << 0;
	}
	cout << h << ":";
	if (m < 10) {
		cout << 0;
	}
	cout << m << ":";
	if (s < 10) {
		cout << 0;
	}
	cout << s << endl;

}
