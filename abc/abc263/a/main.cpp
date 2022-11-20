#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(5);
	for(int i = 0;i < a.size();i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) {
		cout << "Yes" << endl;
		return 0;
	}
	else if (a[0] == a[1] && a[2] == a[3] && a[3] == a[4]) {
		cout << "Yes" << endl;
		return 0;
	}
	else {
		cout << "No" << endl;
	}

	// for(int i = 0;i < a.size();i++){
	// 	cout << "i= " << i << ", a[i]=" << a[i] << endl;
	// }
}
