#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<char> c(n);
	for(int i = 0;i < n;i++)
	{
		c[i] = s[i];
	}
	char t;
	vector<char> ans_max(n), ans_min(n);
	for(int i = 0;i < n;i++)
	{
		ans_max[i] = s[i];
		ans_min[i] = s[i];
	}
	for(int i = 0;i < n;i++)
	{
		
		t = c[0];
		for(int j = 0;j < n-1;j++)
		{
			c[j] = c[j+1];
			//cout << "i = " << c[i] << " i+1 = " << c[i+1] << endl;
		}
		//cout << t << endl;
		c[n-1] = t;
		if(ans_max <= c)
		{
			for(int k = 0;k < n;k++)
			{
				ans_max[k] = c[k];
			}
		}
		if(ans_min >= c)
		{
			for(int k = 0;k < n;k++)
			{
				ans_min[k] = c[k];
			}
		}

	}
	for(int i = 0;i < n;i++)
	{
		cout << ans_min[i];
	}
	cout << endl;
	for(int i = 0;i < n;i++)
	{
		cout << ans_max[i];
	}
	cout << endl;
}