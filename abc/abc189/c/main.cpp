#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ans = 0, min_n = 0;
	for(int i = 0;i < n;i++){
		min_n = a[i];
		for(int j = i;j < n;j++){
			min_n = min(min_n, a[j]);
			ans = max(min_n * (j-i+1), ans);
		}
	}
	cout << ans << endl;
}
