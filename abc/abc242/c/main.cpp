#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<vector<long long>> dp(n, vector<long long> (10, 1));
	dp[0][0] = 0;
	for(int i = 1;i < n;i++) {
		dp[i][1] = dp[i-1][1] + dp[i-1][2];
		for(int j = 2;j < 9;j++){
			dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % 998244353;
		}
		dp[i][9] = dp[i-1][8] + dp[i-1][9];
		for(int j = 1;j < 10;j++){
			dp[i][9] %= 998244353;
		}
	}
	long long ans = 0;
	for(int i = 1;i < 10;i++){
		ans += dp[n-1][i];
		ans %= 998244353;
	}
	ans %= 998244353;
	cout << ans << endl;
}
