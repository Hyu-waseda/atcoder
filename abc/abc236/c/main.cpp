#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	string t;
	map<string, int> a;
	for(int i = 0; i < m; i++) {
		cin >> t;
		a[t]++;
	}
	for(int i = 0;i < n;i++) {
		if(a.count(s[i])) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}
