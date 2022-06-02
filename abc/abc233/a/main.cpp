#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	for(int i = 0;;i++){
		if(x+10*i >= y){
			cout << i << endl;
			return 0;
		}
	}
}
