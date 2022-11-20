#include <bits/stdc++.h>
using namespace std;


vector<int> a(10, 0);

void re(int n, int m, int i, int num) {
	// cout << "n= " << n << ", m= " << m << ", i= " << i << ", num= " << num << endl;

	if(num > m) {
		return ;
	}
	// for(int i = 0;i < n;i++){
	// 	cout << a[i];
	// }
	// cout << endl;
	a[i] = num;
	if(i == n-1) {
		for(int i = 0;i < n;i++){
			// if(i == n-1) {
				// cout << a[i];
			// }
			// else {
				cout << a[i] << " ";
			// }
		}
		cout << endl;
	}
	// a[i] = num;
	re(n, m, i+1, num+1);
	re(n, m, i, num+1);
}

int main() {
	int n, m;
	cin >> n >> m;

	re(n, m, 0, 1);
}
