#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a(20);
	a={46,63,82,44,69,51,63,82,33,30,88,40,64,55,57,25,89,21,39,83};
	sort(a.begin(), a.end());
	for(int i = 0;i<a.size();i++){
		cout << a[i] << endl;
	}
}