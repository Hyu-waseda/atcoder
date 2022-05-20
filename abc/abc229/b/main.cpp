#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	for(;a > 0 && b > 0;a /= 10, b /= 10) {
		if (a%10 + b%10 >= 10) {
			cout << "Hard" << endl;
			return 0;
		}
	}
	cout << "Easy" << endl;
}
