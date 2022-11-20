#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x, y;
	cin >> n >> x >> y;
	long long red = 1, blue = 0, red_next, blue_next;
	while(n != 0){
		red_next = red;
		blue_next = blue;
		blue += red * x;
		blue_next += blue;
		red_next += blue * y;
		blue = blue_next;
		red = red_next;
		n--;
	}
	cout << blue << endl;
}
