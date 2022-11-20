#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, d;
	cin >> a >> b >> d;
	cout << fixed << setprecision(15);
	cout << a*cos(M_PI*d/180)-b*sin(M_PI*d/180) << " " << b*cos(M_PI*d/180)+a*sin(M_PI*d/180) << endl;

}
