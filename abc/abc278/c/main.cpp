#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	map<pair<int, int>, bool> c;

	int t, a, b;
	for(int i = 0;i < q;i++){
		cin >> t >> a >> b;
		if(t == 1) {
			c[{a, b}] = true;
		} else if (t == 2) {
			c[{a, b}] = false;
		} else {
			if(c[{a, b}] && c[{b, a}]) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		}
	}
}
