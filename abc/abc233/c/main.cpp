#include <bits/stdc++.h>
using namespace std;


long long n, x, ans = 0;
vector<vector<long long>> a;
vector<long long> L;

void dfs(long long pos, long long seki) {
	cout << pos << n << endl;
	if(pos == n) {
		if(seki == x) {
			ans++;
		}
		return;
	}
	for(long long i = 0; i < L[i];i++) {
		cout << "pos = " << pos << " a[pos][i] = " << a[pos][i] << endl;
		if (seki > x / a[pos][i]) {
			//cout << "out " << a[pos][i] << endl;
			continue ;
		}
		dfs(pos+1, seki*a[pos][i]);
	}
}

int main() {
	cin >> n >> x;
	a.resize(n);
	L.resize(n);
	long long l;
	for(long long i = 0;i < n; i++){
		cin >> l;
		L[i] = l;
		a[i].resize(l);
		for(long long j = 0;j < L[i];j++){
			cin >> a[i][j];
			//cout << "l= " << l << ", a[i][j] = " << a[i][j] << endl;
		}
	}
	for(int i = 0;i < n;i++){
		/* for(int j = 0; j < L[j]; j++){
			cout << a[i][j];
		}
		cout << '\n'; */
	}
	dfs(0, 1);
	cout << ans << endl;
}
