#include <bits/stdc++.h>
using namespace std;

void solve(int n, int p, string s){
	if(p == n){
		cout << s << endl;
		return;
	}
	solve(n, p+1, s);
	s[p] = 'b';
	solve(n, p+1, s);
	s[p] = 'c';
	solve(n, p+1, s);
}

int main() {
	int n;
	cin >> n;
	string s = "";
	for(int i = 0;i < n;i++){
		s += 'a';
	}
	solve(n, 0, s);
}
