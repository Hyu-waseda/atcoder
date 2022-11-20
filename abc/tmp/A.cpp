#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;

	map<int, int> a;
	int num;
	for(int i = 0;i < n;i++){
		cin >> num;
		a[num]++;
		if(a[num] == 4){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}