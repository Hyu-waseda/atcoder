#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	map<int, vector<int>> b;
	for(int i = 0;i < n;i++){
		b[a[i]].push_back(i);
	}
	int x, k;
	for(int i = 0;i < q;i++){
		cin >> x >> k;
		if (b.count(x) && b[x].size() >= k) {
			cout << b[x][k-1]+1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
}
