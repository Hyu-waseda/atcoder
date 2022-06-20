#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> x(n), y(n);
	for(int i = 0;i < n;i++){
		cin >> x[i] >> y[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			for(int k = j+1;k < n;k++){
				if (x[i]-x[j] == 0 && x[i]-x[k] == 0){
					cout << "Yes" << endl;
					return 0;
				}
				else if ((y[i]-y[j])/(x[i]-x[j]) == (y[i]-y[k])/(x[i]-x[k])){
					//cout << "i= " << i << ", j= " << j << ", k= " << k << endl;
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
