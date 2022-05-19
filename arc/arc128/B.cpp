#include <bits/stdc++.h>
using namespace std;

bool same_3(int a, int b)
{
	if(a%3 == b%3)
	{
		return true;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int r, g, b;

		cin >> r >> g >> b;
		if(r == g)
		{
			cout << r << endl;
			continue;
		}
		if(r == b)
		{
			cout << r << endl;
			continue;
		}
		if(b == g)
		{
			cout << b << endl;
			continue;
		}
		if(same_3(r, g) && same_3(g, b))
		{
			if(r > g && g > b)
			{
				cout << g << endl;
				continue;
			}
			if(b > g && g > r)
			{
				cout << g << endl;
				continue;
			}
			if(r > b && b > g)
			{
				cout << b << endl;
				continue;
			}
			if(g > b && b > r)
			{
				cout << b << endl;
				continue;
			}
			if(b > r && r > g)
			{
				cout << r << endl;
				continue;
			}
			if(g > r && r > b)
			{
				cout << r << endl;
				continue;
			}
		}
		if(same_3(r, g))
		{
			cout << max(r,g) << endl;
			continue;
		}
		if(same_3(r, b))
		{
			cout << max(r,b) << endl;
			continue;
		}
		if(same_3(b, g))
		{
			cout << max(b,g) << endl;
			continue;
		}
		cout << -1 << endl;
	}
}