#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, a, b, p, q, r, s;
	cin >> n >> a >> b >> p >> q >> r >> s;
	for(long long i = p;i <= q;i++){
		for(long long j = r;j <= s;j++){
			if(abs(a-i) == abs(b-j)){
				cout << "#";
			}
			else{
				cout << ".";
			}
		}
		cout << endl;
	}
}
