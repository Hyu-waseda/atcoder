#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int start = 0, end = s.length()-1;
	if (end == 0) {
		cout << "Yes" << endl;
		return 0;
	}
	while(s[start] == 'a' && s[end] == 'a') {
		start++;
		end--;
	}
	if (s[start] == 'a') {
		cout << "No" << endl;
		return 0;
	}
	if (end <= 0) {
		cout << "Yes" << endl;
		return 0;
	}
	while(s[end] == 'a') {
		end--;
	}
	//cout << s << endl;
	while(end - start > 0) {
		if (s[start] != s[end]) {
			cout << "No" << endl;
			return 0;
		}
		start++;
		end--;
	}
	cout << "Yes" << endl;
}
