#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, r;
	cin >> l >> r;
	string s;
	cin >> s;
	vector<char> c(s.length());
	for(int i = 0;i < s.length();i++){
		c[i] = s[i];
	}
	reverse(c.begin()+l-1, c.end()-(s.length()-r));
	for(int i = 0;i < s.length();i++){
		cout << c[i];
	}
	cout << endl;
}
