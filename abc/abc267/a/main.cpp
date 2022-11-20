#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> a(5);
	a = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday"};
	for(int i = 0;i < 5;i++){
		if (a[i] == s) {
			cout << 5 - i << endl;
		}
	}
}
