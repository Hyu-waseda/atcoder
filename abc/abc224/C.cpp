#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> x(n), y(n);
	for(int i = 0;i < n;i++)
	{
		cin >> x[i] >> y[i];
	}
	long long ans = 0;
	for(int i = 0;i < n-2;i++)
	{
		for(int j = i+1;j < n-1;j++)
		{
			for(int k = j+1;k < n;k++)
			{
				long long a, b, c, d;
				a = x[i] - x[k];
				b = y[i] - y[k];
				c = x[j] - x[k];
				d = y[j] - y[k];
				
				if(a * d - c * b != 0)
				{
					ans++;
				}
				
			}
		}
	}
	cout << ans << endl;
}