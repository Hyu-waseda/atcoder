#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s(10);
	for(int i = 0;i < 10;i++){
		cin >> s[i];
	}

	int a = 1, b = 10, c = 1, d = 10;
	bool flag = false;
	for(int i = 0;i < 10;i++){
		if(s[i].find_first_of('#') != string::npos) {
			c = s[i].find_first_of('#') + 1;
			if(!flag){
				a = i+1;
			}
			flag = true;
		}
		else if(flag){
			b = i;
			flag = false;
		}
		if(s[i].find_last_of('#') != string::npos) {
			d = s[i].find_last_of('#') + 1;
		}
		else {
			flag = false;
		}
	}
	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
}
