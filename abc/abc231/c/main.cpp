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
int binary_search(int key, vector<int> a)
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
	int n, q;
	cin >> n >> q;
	vector<int> a(n), x(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	/* for(int i = 0;i < q;i++){
		cin >> x[i];
	} */
	sort(a.begin(), a.end());

	for(int i = 0;i < q;i++){
		int x;
		cin >> x;
		cout << a.end()-lower_bound(a.begin(), a.end(), x) << endl;
	}
}
