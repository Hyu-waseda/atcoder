#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, input, start;
	cin >> n;
	vector<int> a(2*n+2, 0);
	start = 1;
	while(1){
		for(int j = start;j < 2*n+2;j++){
			if (a[j] == 0) {
				cout << j << endl;
				a[j] = 1;
				start = j+1;
				break;
			}
		}
		cin >> input;
		if (input == 0) {
			return 0;
		}
		a[input] = 1;
	}
}