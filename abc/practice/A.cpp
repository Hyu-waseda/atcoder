#include <bits/stdc++.h>
using namespace std;

//調べたい条件式(keyの位置を調べたかったらmid >= key)
bool P(int mid, int key)
{
	if(mid >= key)
		return true;
	else
		return false;
}

//P(mid) == trueとなる最小のmidを探す
int binary_serch(int key, vector<int> a)
{
	int left = 0, right = a.size() - 1;
	while(right - left > 1)
	{
		int mid = (right + left) / 2;
		if(P(a[mid], key))
		{
			right = mid;
		}
		else
		{
			left = mid;
		}
	}
	return right;
}

int main() {
	vector<int> a(5);
	for(int i = 0;i < 5;i++){
		a[i] = i*2;
	}
	cout << "binary " << binary_serch(-1, a) << endl;
	for(int i = 0;i < 5;i++){
		cout << a[i] << endl;
	}
}


