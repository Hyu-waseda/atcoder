#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	string s;
	cin >> n >> q >> s;
	int cmd, x, index = 0;
	for(int i = 0;i < q;i++){
		cin >> cmd >> x;
		if(cmd == 1){
			index -= x;
			index = (index + s.size()) % s.size();
		}
		else{
			cout << s[(index+x-1+s.size())%s.size()] << endl;;
		}
	}
	//cout << -1 % 4 << endl;
}
