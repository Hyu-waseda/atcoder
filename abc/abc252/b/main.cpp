#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, max;
	max = 0;
	cin >> n >> k;
	vector<int> a(n), b(k);
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	for(int i = 0;i < k;i++){
		cin >> b[i];
		if (max == a[b[i]-1]){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
