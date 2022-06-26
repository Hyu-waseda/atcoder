#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n+2, 0);
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	long long sum = 0;
	for(int i = 0;i < n+1;i++){
		sum += abs(a[i]-a[i+1]);
	}
	//cout << "sum= " << sum << endl;
	for(int i = 1;i < n+1;i++){
		//cout << "i= " << i << endl;
		if(a[i-1] <= a[i] && a[i] <= a[i+1]){
			cout << sum << endl;
		} else if (a[i-1] >= a[i] && a[i] >= a[i+1]) {
			cout << sum << endl;
		} else if (a[i-1] >= a[i] && a[i] <= a[i+1]) {
			cout << sum - (a[i-1] - a[i] + a[i+1] - a[i]) + abs(a[i-1]-a[i+1]) << endl;
		} else if (a[i-1] <= a[i] && a[i] >= a[i+1]) {
			cout << sum - (a[i] - a[i-1] + a[i] - a[i+1]) + abs(a[i-1]-a[i+1]) << endl;
		}
	}
}

//1 2 3
//1 3 2
//2 1 3
//2 3 1
//3 1 2
//3 2 1
