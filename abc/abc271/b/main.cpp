#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	int l;
	vector<vector<int>> a(n, vector<int>());
	for(int i = 0;i < n;i++){
		cin >> l;
		vector<int> b(l);
		for(int j = 0;j < l;j++){
			cin >> b[j];
		}
		a[i] = b;
	}
	// for(int i = 0;i < n;i++){
	// 	for(int j = 0;j < a[i].size();j++){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	int s, t;
	for(int i = 0;i < q;i++){
		cin >> s >> t;
		cout << a[s-1][t-1] << endl;
	}
}
