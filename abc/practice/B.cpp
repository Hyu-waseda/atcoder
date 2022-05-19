#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	deque<int> s;
	for(int i = 0;i < n;i++)
	{
		int t, a;
		cin >> t >> a;
		if(t == 1)
		{
			s.push_front(a);
		}
		else if(t == 2)
		{
			s.push_back(a);
		}
		else
		{
			cout << s[a-1] << endl;
		}
		
	}
}