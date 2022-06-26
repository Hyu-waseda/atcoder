#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int> (3));
	for(int i = 0;i < n;i++){
		cin >> a[i][0] >> a[i][1];
		a[i][2] = i;
	}
	sort(a.begin(),a.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[1] < beta[1];});
	/* for(int i = 0;i < n;i++){
		cout << a[i][0] << " " << a[i][1] << endl;
	} */
	string s;
	cin >> s;
	
	
}
