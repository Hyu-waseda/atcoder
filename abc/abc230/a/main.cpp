#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a <= 41) {
		if (a < 10) {
			cout << "AGC00" << a << endl;
		} else {
			cout << "AGC0" << a << endl;
		}
	} else {
		if (a < 100) {
			cout << "AGC0" << a+1 << endl;
		} else {
			cout << "AGC" << a+1 << endl;
		}
	}
}
