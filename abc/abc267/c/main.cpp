#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<long long> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}

	vector<long long> b(n, 0);
	for(int i = 0;i < n;i++){
		if(i == 0) {
			b[i] = a[i]; 
		} else {
			b[i] = b[i-1] + a[i] * (i + 1);
		}
	}

	long long max_n = -100000000000000;
	for(int i = 0;i + m  - 1< n;i++){
		max_n = max(max_n, b[i + m - 1] - b[i]);
	}
	for(int i = 0;i < n;i++){
		cout << "i= " << i << ", b[i]= " << b[i] << endl;
	}
	cout << "ans= " << max_n << endl;
}
