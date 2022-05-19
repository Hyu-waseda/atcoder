#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0;i < n;i++)
	{
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	
}