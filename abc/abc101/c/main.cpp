#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	int one;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] == 1) {
			one = i;
		}
	}
	int index = 0, count = 0;
	while(1){
		index += k;
		count++;
		if(index >= n){
			break;
		}
		index--;
	}
	/* cout << "one= " << one << endl;
	cout << "count= " << count << endl;
	for(int i = 0;i < n;i++){
		cout << "i= " << i << ", " << a[i] << endl;
	} */
	cout << count << endl;

}

// 4 3 2 1 5 6 7 8 9