#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<vector<long long>> dp(8, vector<long long> (s.size(), 0));
	if(s[0] == 'c'){
		dp[0][0]++;
	}
	string chokudai = "chokudai";
	for(int i = 1;i < s.size();i++){
		if(s[i] == 'c'){
			dp[0][i]++;
		}
		/* else if(s[i] == 'h'){
			dp[1][i] = dp[0][i-1];
		} */
		else{
			for(int j = 1;j < 8;j++){
				if(s[i] == chokudai[j]){
					dp[j][i] = dp[j-1][i-1];
				}
				/* else{
					dp[j][i] = dp[j][i-1];
				} */
			}
			/* dp[0][i] = dp[0][i-1]; */
		}
		for(int j = 0;j < 8;j++){
			dp[j][i] += dp[j][i-1];
			dp[j][i] %= 1000000007;
		}
	}
	/* for(int i = 0;i < 8;i++){
		cout << chokudai[i] << ", ";
		for(int j = 0;j < s.size();j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	} */
	cout << dp[7][s.size()-1] % 1000000007 << endl;
}
