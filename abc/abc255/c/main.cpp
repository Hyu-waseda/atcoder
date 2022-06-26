#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, a, d, n;
	cin >> x >> a >> d >> n;
	if(d == 0) {
		cout << abs(a-x) << endl;
	} else if (d > 0) {
		if(x < a) {
			cout << a-x << endl;
		} else if (a + d*(n-1) < x) {
			cout << x - (a + d*(n-1)) << endl;
		} else {
			//cout << x-(a+((x-a)/d)*d) << " " << a+(((x-a)/d)+1)*d - x << endl;
			cout << min(x-(a+((x-a)/d)*d), a+(((x-a)/d)+1)*d - x) << endl;;
			/* if (x-(a+((x-a)/d)*d) < a+(((x-a)/d)+1)*d - x) {
				cout << x-(a+((x-a)/d)*d << endl;
			} else {
				cout << (((x-a)/d)+1)*d - x << endl;
			} */
		}
	} else {
		if(a < x) {
			cout << x-a << endl;
		} else if (x < a + d*(n-1)) {
			cout << (a + d*(n-1)) - x << endl;
		} else {
			//cout << (a+((x-a)/d)*d)-x << " " << x-a+(((x-a)/d)+1)*d << endl;
			cout << min((a+((x-a)/d)*d)-x, x-(a+(((x-a)/d)+1)*d)) << endl;;
			/* if (x-(a+((x-a)/d)*d) < a+(((x-a)/d)+1)*d - x) {
				cout << x-(a+((x-a)/d)*d << endl;
			} else {
				cout << (((x-a)/d)+1)*d - x << endl;
			} */
		}
	}
}
