#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<tuple<int, int, string>> a(n * 2);
	for(int i = 0;i < n * 2;i++)
	{
		int n = 0;
		string s;
		cin >> s;
		tuple<int, int, string> b = make_tuple(n, n * 2 - 1 - i, s);
        a[i] = b;
	}
	
	for(int i = 0;i < m;i++)
	{
		for(int j = 1;j < n * 2;j += 2)
		{
			//cout << "j-1 = " << get<1>(a[j-1]) << " J = " << get<1>(a[j]) << endl;
			if(get<2>(a[j - 1])[i] == 'G' && get<2>(a[j])[i] == 'P')
			{
				get<0>(a[j])++;
			}
			if(get<2>(a[j - 1])[i] == 'G' && get<2>(a[j])[i] == 'C')
			{
				get<0>(a[j - 1])++;
			}
			if(get<2>(a[j - 1])[i] == 'C' && get<2>(a[j])[i] == 'P')
			{
				get<0>(a[j - 1])++;
			}
			if(get<2>(a[j - 1])[i] == 'C' && get<2>(a[j])[i] == 'G')
			{
				get<0>(a[j])++;
			}
			if(get<2>(a[j - 1])[i] == 'P' && get<2>(a[j])[i] == 'G')
			{
				get<0>(a[j - 1])++;
			}
			if(get<2>(a[j - 1])[i] == 'P' && get<2>(a[j])[i] == 'C')
			{
				get<0>(a[j])++;
			}
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
	}
	
	vector<tuple<int, int>> c(n * 2);
	for(int i = 0;i < n * 2;i++)
	{
		
		tuple<int, int> d = make_tuple(get<1>(a[i]), get<0>(a[i]));
        c[i] = d;
	}
	sort(c.begin(), c.end());
	for(int i = 0;i < n * 2;i++)
	{
		cout << abs(get<1>(a[i])) << endl;
	}
}