#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<vector<char>, int>> s(n);
	for(int i = 0;i < n;i++)
	{
		vector<char> a(10);
		for(int i = 0;i < 10;i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		s[i].first  = a;
		s[i].second = i;
	}
	sort(s.begin(), s.end());
	long long count, ans = 0;
	for(int i = 0;i < n;)
	{
		count = -1;
		for(int j = i;j < n;j++)
		{
			if(s[i].first == s[j].first && j != n-1)
			{
				count++;
			}
			else
			{
				cout << count << endl;
				ans += count * (count + 1) / 2;
				if(j == n-1)
				{
					i++;
				}
				i = j;
				break;
			}
			//cout << count << endl;
		}
		//cout << i << endl;
	}
	//if(s[n-2].first == s[n-1].first)
	//{
		ans += count * (count + 1) / 2;
	//}
	cout << ans << endl;
}
