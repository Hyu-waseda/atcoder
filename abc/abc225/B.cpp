#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0;i < n-1;i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	int ans = 0;
	for(int i = 1;i <= n;i++)
	{
		//cout << 1 << endl;
		int count = 0;
		for(int j = 0;j < n-1;j++)
		{
			if(a[j].first == i || a[j].second == i)
			{
				count++;
			}
			if(count != j+1)
			{
				break;
			}
		}
		if(count == n-1)
		{
			ans++;
		}
		if(ans > 1)
		{
			break;
		}
	}
	if(ans == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}