#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n), b(n);
	for(int i = 0;i < n;i++){
		cin >> a[i] >> b[i];
	}
	vector<vector<int>> dp(n+1, vector<int> (x+1, 0));
	dp[0][0] = 1;
	for(int i = 0; i < n;i++){
		for(int j = 0;j < x+1;j++) {
			if (dp[i][j] == 1) {
				if (j+a[i] < x+1) {
					dp[i+1][j+a[i]] = 1;
				}
				if (j+b[i] < x+1) {
					dp[i+1][j+b[i]] = 1;
				}
			}
		}
	}
	/* for(int i = 0;i < n+1;i++){
		for(int j = 0;j < x+1;j++) {
			cout << dp[i][j];
		}
		cout << endl;
	} */
	if (dp[n][x] == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}
