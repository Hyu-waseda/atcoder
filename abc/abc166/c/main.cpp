#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> h(n+1);
	for(int i = 1;i <= n;i++){
		cin >> h[i];
	}
	vector<int> a(m), b(m);
	for(int i = 0;i < m;i++){
		cin >> a[i] >> b[i];
	}
	vector<int> ma(n+1, 0);
	for(int i = 0;i < m;i++){
		ma[a[i]] = max(ma[a[i]], h[b[i]]);
		ma[b[i]] = max(ma[b[i]], h[a[i]]);
	}
	int ans = 0;
	for(int i = 1;i <= n;i++){
		if (h[i] > ma[i]){
			ans++;
		}
	}
	cout << ans << endl;
}
