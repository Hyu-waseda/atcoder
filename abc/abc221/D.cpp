#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long max = 0;
	vector<int> a(n), b(n);
	for(int i = 0;i < n;i++)
	{
		cin >> a[i] >> b[i];
		if(max < a[i] + b[i])
		{
			max = a[i] + b[i];
		}
	}
	vector<long long> ans(max, 0), c(max, 0), d(max, 0);
	/*
	for(int i = 0;i < n;i++)
	{
		c[a[i] + b[i]]++;
	}
	*/
	//sort(a.begin(), a.end());
	int num = 0;
	for(int i = 0;i < n;i++)
	{
		c[a[i]-1]++;
		//cout << a[i] << endl;
	}
	for(int i = 0;i < n;i++)
	{
		d[a[i] - 1 + b[i] - 1]++;
	}
/*
	for(int i = 0;i < n;i++)
	{
		cout << d[i] << endl;
	}
*/
/*
	for(int i = 0;i < n;i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	for(int i = 0;i < n;i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
*/
	for(int i = 0;i < max;i++)
	{
		num += c[i];
		ans[num]++;
		num -= d[i];
	}
	
	for(int i = 1;i < n+1;i++)
	{
		cout << ans[i] << endl;
	}
	
}