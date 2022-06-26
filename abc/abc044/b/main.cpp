#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count;
	for(char c = 'a';c <= 'z';c++){
		count = 0;
		for(int i = 0;i < s.size();i++){
			if (s[i] == c) {
				count++;
			}
		}
		if (count % 2 == 1) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
