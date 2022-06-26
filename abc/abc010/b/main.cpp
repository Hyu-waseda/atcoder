#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, ans = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		if (a % 2 == 1 && (a % 3 == 0 || a % 3 == 1)) {
			continue;
		}
		for(int i = 1;i < 6;i++) {
			if((a - i) % 2 == 1 && ((a - i) % 3 == 0 || (a - i) % 3 == 1)) {
				ans += i;
				break;
			}
		}
	}
	cout << ans << endl;
}
