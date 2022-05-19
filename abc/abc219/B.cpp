#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> s(3);
	cin >> s[0] >> s[1] >> s[2];
	string n;
	cin >> n;
	int i = 0;
	while (i < n.size())
	{
		if (n[i] == '1')
		{
			cout << s[0];
		}
		if (n[i] == '2')
		{
			cout << s[1];
		}
		if (n[i] == '3')
		{
			cout << s[2];
		}
		i++;
	}
	cout << endl;
}