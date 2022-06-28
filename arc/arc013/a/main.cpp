#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, l, p, q, r;
	cin >> n >> m >> l >> p >> q >> r;
	int ans = 0;
	ans = max({ans,
	 (n/p)*(m/q)*(l/r),
	 (n/p)*(l/q)*(m/r),
	 (m/p)*(n/q)*(l/r),
	 (m/p)*(l/q)*(n/r), 
	 (l/p)*(n/q)*(m/r),
	 (l/p)*(m/q)*(n/r)});
	 cout << ans << endl;
}
