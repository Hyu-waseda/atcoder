#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(sqrt(pow(x1-x2,2)+pow(y1-y2,2)) > 2*sqrt(5)) {
		cout << "No" << endl;
		return 0;
	}
	for(int i = -3;i <= 3;i++){
		for(int j = -3;j <= 3;j++){
			if (sqrt(pow(x1-(x1+i),2)+pow(y1-(y1+j),2)) == sqrt(5)) {
				if (sqrt(pow(x2-(x1+i),2)+pow(y2-(y1+j),2)) == sqrt(5)) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}
	cout << "No" << endl;
}
