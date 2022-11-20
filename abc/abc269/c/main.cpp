#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long n;
	cin >> n;

	for(unsigned long long i = 0; ; i = (i - n) & n) {
		cout << i << endl;
		if(i == n) {
			break;
		}
	}
}
