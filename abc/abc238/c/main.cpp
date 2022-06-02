#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n <= 9) {
		cout << n * (n+1) / 2;
		return 0;
	}
	long long m = n/10, ans = 45, power = 10;
	while (m != 0) {
		if (m <= 9) {
			ans += ((n-power+1)*(n-power+1+1)/2)%998244353;
			ans %= 998244353;
		} else {
			ans += ((power*9)*(power*9+1)/2)%998244353;
			ans %= 998244353;
		}
		//cout << ans << endl;
		m /= 10;
		power *= 10;
	}
	cout << ans%998244353 << endl;
	//1 ~ 9
	//1 ~ 90
	//1 ~ 900
	/* int digit = 0, tmp_digit;
	long long tmp = n;
	while (tmp != 0) {
		digit++;
		tmp /= 10;
	}
	tmp_digit = digit;
	long long ans = 9;
	tmp = 10;
	//cout << "digit " << digit << endl;
	while(digit != 2) {
		ans += (((tmp%998244353)*9)%998244353)*(((tmp%998244353)*9)%998244353+1)/2%998244353;
		digit--;
		tmp *= 10;
		cout << "ans = " << ans << endl;
	}
	cout << "tmp = " << tmp << endl; */
}
