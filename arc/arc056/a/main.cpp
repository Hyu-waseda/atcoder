#include <bits/stdc++.h>
using namespace std;

int main() {
	long long one, set, k, l;
	cin >> one >> set >> k >> l;
	cout << min(k/l*set + (k-k/l*l)*one, (k/l+1)*set) << endl;
}
