#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	s = " " + s;
	if(s[1] != '0') {
		cout << "No" << endl;
		return 0;
	}
	vector<bool> col(7, false);
	if(s[7] == '0') {
		col[0] = true;
	}
	if(s[4] == '0') {
		col[1] = true;
	}
	if(s[2] == '0' && s[8] == '0') {
		col[2] = true;
	}
	if(s[1] == '0' && s[5] == '0') {
		col[3] = true;
	}
	if(s[3] == '0' && s[9] == '0') {
		col[4] = true;
	}
	if(s[6] == '0') {
		col[5] = true;
	}
	if(s[10] == '0') {
		col[6] = true;
	}
	for(int i = 0;i < 7;i++){
		for(int j = 0;j < 7;j++){
			if(j - i <= 1) {
				continue ;
			}
			if(col[i] == false && col[j] == false) {
				for(int k = i + 1;k < j;k++) {
					if (col[k] == true) {
						cout << "Yes" << endl;
						return 0;
					}
				}
			}
		}
	}
	cout << "No" << endl;
}
