#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> p(n+2);
	for(int i = 2; i < n+1;i++){
		cin >> p[i];
	}

	int i = n, ans = 1;
	while(p[i] != 1) {
		// cout << i << endl;
		i = p[i];
		ans++;
	}
	cout << ans << endl;
}
