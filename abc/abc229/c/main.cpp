#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, w;
	cin >> n >> w;
	vector<vector<long long>> a(n, vector<long long>(2));
	for(int i = 0;i < n;i++){
		cin >> a[i][0] >> a[i][1];
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	/* for(int i = 0;i < n;i++){
		cout << a[i][0] << " " << a[i][1] << endl;
	} */
	long long ans = 0;
	for(int i = 0;i < n;i++) {
		if (w == 0) {
			break ;
		} else {
			ans += a[i][0] * min(w, a[i][1]);
			w -= min(w, a[i][1]);
		}
	}
	cout << ans << endl;
}
