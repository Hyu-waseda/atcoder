#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i = 0;i < n;i++) {
		cin >> s[i];
	}
	map<string, int> a;
	for(int i = 0;i < n;i++){
		a[s[i]]++;
	}
	string ans = s[0];
	for(int i = 0;i < n;i++){
		if(a[ans] < a[s[i]]) {
			ans = s[i];
		}
	}
	cout << ans << endl;
}
