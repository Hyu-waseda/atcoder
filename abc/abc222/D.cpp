#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i < n;i++)
	{
		cin >> b[i];
	}
	long long p = 3001;
	vector<vector<long long>> dp(3001, vector<long long> (n, 0));
	
		for(int j = a[0];j <= b[0];j++)
		{
			dp[0][j]++;
		}
	
	/*
	if(i == 2 && j == 0)
	{
		cout << "aaaaa" << endl;
	}
	*/
	for(int i = 1;i < n;i++)
	{
		for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < 6;j++)
		{
			cout << dp[i][j];
		}
		cout << endl;
	}
		for(int j = 0; j <= a[i];j++)
		{
			cout << "i = " << i << " j = " << j << endl;
			dp[i][a[i]] += dp[i - 1][j] % 998244353;
		}
		for(int j = a[i] + 1;j <= b[i];j++)
		{
			//cout << "i = " << i << " j = " << j << endl;
			//long long k = dp[i][j - 1] % 998244353 + dp[i-1][j] % 998244353;
			dp[i][j] = dp[i][j - 1] % 998244353 + dp[i-1][j] % 998244353;
			
		}
		
	}
	
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < 6;j++)
		{
			cout << dp[i][j];
		}
		cout << endl;
	}
	long long ans = 0;
	for(int i = 0;i < 3001;i++)
	{
		ans += dp[n-1][i] % 998244353;
	}
	cout << ans % 998244353 << endl;
}