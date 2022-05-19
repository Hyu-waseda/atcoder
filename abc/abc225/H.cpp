#include <bits/stdc++.h>
using namespace std;

vector<int> ans(vector<int> a)
{
	a[0] = 3;
	return a;
}

int main() {
	vector<int> a(2);
	a[0] = 0;
	a[1] = 1;
	a = ans(a);
	cout << a[0] << a[1];
}