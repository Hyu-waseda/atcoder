#include <bits/stdc++.h>
using namespace std;

bool a(string s) {
	for(int i = 0; i < s.size(); i++) {
		if(i%3 == 0) {
			if(s[i] != 'o') {
				return false;
			}
		}
		if(i%3 == 1) {
			if(s[i] != 'x') {
				return false;
			}
		}
		if(i%3 == 2) {
			if(s[i] != 'x') {
				return false;
			}
		}
	}
	return true;
}

bool b(string s) {
	for(int i = 0; i < s.size(); i++) {
		if(i%3 == 0) {
			if(s[i] != 'x') {
				return false;
			}
		}
		if(i%3 == 1) {
			if(s[i] != 'o') {
				return false;
			}
		}
		if(i%3 == 2) {
			if(s[i] != 'x') {
				return false;
			}
		}
	}
	return true;
}

bool c(string s) {
	for(int i = 0; i < s.size(); i++) {
		if(i%3 == 0) {
			if(s[i] != 'x') {
				return false;
			}
		}
		if(i%3 == 1) {
			if(s[i] != 'x') {
				return false;
			}
		}
		if(i%3 == 2) {
			if(s[i] != 'o') {
				return false;
			}
		}
	}
	return true;
}

int main() {
	string s;
	cin >> s;
	if(a(s) || b(s) || c(s)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}