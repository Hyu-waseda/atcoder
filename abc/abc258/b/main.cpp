#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, tmp;
	cin >> n;
	vector<vector<int>> a(n, vector<int> (n));
	for(int i = 0;i < n;i++){
		cin >> tmp;
		for(int j = n-1;j >= 0;j--){
			a[i][j] = tmp % 10;
			tmp /= 10;
		}
	}
	long long ans = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i+n)%n][(j+k+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i+n)%n][(j-k+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i+k+n)%n][(j+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i-k+n)%n][(j+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i+k+n)%n][(j+k+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i-k+n)%n][(j-k+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i-k+n)%n][(j+k+n)%n];
			}
			ans = max(ans, tmp);
			tmp = a[i][j];
			for(int k = 1;k < n;k++){
				tmp *= 10;
				tmp += a[(i+k+n)%n][(j-k+n)%n];
			}
			ans = max(ans, tmp);
		}
	}
	cout << ans << endl;
}
