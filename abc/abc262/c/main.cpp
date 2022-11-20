#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n+1);
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}

	long long ans = 0, count = 0;
	for(int i = 1;i <= n;i++){
		if(a[i] == i){
			count++;
		}
	}
	// cout << "count= " << count << endl;
	ans += count * (count - 1) / 2;
	count = 0;
	for(int i = 1;i <= n;i++){
		if(i == a[a[i]] && a[i] != a[a[i]]) {
			count++;
		}
	}
	cout << ans + count / 2 << endl;
}
