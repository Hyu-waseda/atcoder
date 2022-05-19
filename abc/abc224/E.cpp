#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w, n;
	cin >> h >> w >> n;
	//vector<vector<int>> dp(h+1, vector<int> (w+1, 0));
	vector<pair<pair<int, int>, int>> x(n), y(n);
	for(int i = 0;i < n;i++)
	{
		cin >> x[i].first.first >> x[i].second >> x[i].first.second;
		y[i].first.first = x[i].second;
		y[i].first.second = x[i].first.second;
		y[i].second = x[i].first.first;
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	vector<vector<int>> dp(h+1, vector<int> (w+1, 0));
	for(int i = 0;i < n;i++)
	{
		int count = 0;
		for(int j = i;j < n-1;j++)
		{
			if(x[i].first.first == x[i+1].first.first)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		for(int j = 0;;j++)
		{
			if(count == 0)
			{
				i += j;
			}
			dp[x[i+j].first.first][x[i+j].second] = count;
			count--;
		}
	}
	for(int i = 1;i <= h;i++)
	{
		for(int j = 1;j <= w;j++)
		{
			cout << dp[i][j];
		}
	cout << endl;
	}
	/*
	vector<pair<int, int>> x(n), y(n);
	for(int i = 0;i < n;i++)
	{
		cin >> x[i].first >> y[i].first >> x[i].second;
		y[i].second = x[i].second;
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	*/

}