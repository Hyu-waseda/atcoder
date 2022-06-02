#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, r;
	cin >> l >> r;
	string s;
	cin >> s;
	vector<char> a(l-1), b(r-l+1), c(s.size()-r);
	for(int i = 0;i < l-1;i++){
		a[i] = s[i];
	}
	for(int i = 0;i < r-l+1;i++){
		b[i] = s[l+i-1];
	}
	for(int i = 0;i < s.size()-r;i++){
		c[i] = s[r+i-1];
	}
	reverse(b.begin(), b.end());
	for(int i = 0;i < l-1;i++){
		cout << a[i];
	}
	for(int i = 0;i < r-l+1;i++){
		cout << b[i];
	}
	for(int i = 0;i < s.size()-r;i++){
		cout << b[i];
	}
	cout << endl;
}
