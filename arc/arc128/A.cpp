#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<double> a(n);
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	vector<vector<double>> m(4, vector<double> (n+1, 0));
	m[0][0] = 1;
	for(int i = 1;i < n;i++)
	{
		m[0][i] = max(m[0][i-1], m[1][i-1]/a[i-1]);
		m[1][i] = max(m[0][i-1] * a[i-1], m[0][i-1]);
		if(m[0][i-1] < m[1][i-1]/a[i-1])
		{
			m[2][i] = 1;
		}
		if(m[0][i-1] * a[i-1] > m[0][i-1])
		{
			m[3][i] = 1;
		}
	}
	m[0][n] = max(m[0][n-1], m[1][n-1]/a[n-1]);
	//cout << m[0][n] << endl;
	vector<int> ans(n, 0);
	int index = 0;
	double max_k = m[0][n];
	for(int i = 0;i < n;i++)
	{
		
		//cout << "index = " << index << " max_k = " << max_k << " n-i-1 = " << n-i-1 << endl;
		if(m[index][n-i-1] == max_k && a[n-i-1] == 1)
		{
			int j = 1;
			for(;n-i-1-j >= 0;j++)
			{
				if(m[2][n-i-1-j] == 1 && index == 0)
				{
					ans[n-1-i] = 1;
					index = 1;
					break;
				}
				if(m[3][n-i-1-j] == 1 && index == 1)
				{
					ans[n-1-i] = 1;
					index = 0;
					break;
				}
			}
			if(n-i-1-j != 0)
			{
				ans[n-1-i] = 0;
			}
		}
		else if(m[index][n-i-1] == max_k)
		{
			ans[n-1-i] = 0;
		}
		else
		{
			if(index == 0)
			{
				index = 1;
				ans[n-1-i] = 1;
				max_k = m[1][n-1-i];
			}
			else if(index == 1)
			{
				index = 0;
				ans[n-1-i] = 1;
				max_k = m[0][n-1-i];
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		cout << ans[i] << " ";
	}
	/*
	cout << endl;
	for(int i = 0;i < n+1;i++)
	{
		cout << m[0][i] << " ";
	}
	cout << endl;
	for(int i = 0;i < n+1;i++)
	{
		cout << m[1][i] << " ";
	}
	*/
	cout << endl;
}