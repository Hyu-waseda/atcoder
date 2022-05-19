#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> a(n), b(n);
	for(int i = 0;i < n;i++)
	{
		cin >> a[i] >> b[i];
	}
	vector<double> time(n);
	for(int i = 0;i < n;i++)
	{
		time[i] = a[i]/b[i];
	}

if(n == 1)
	{
		cout << a[0] / 2 << endl;
		return 0;
	}
	else if(n == 2)
	{
		if(time[0] <= time[1])
		{
			cout << a[0] + (a[1]-b[1]*time[0]) / 2 << endl;
			return 0;
		}
		else
		{
			cout << a[0] - (a[0]-b[0]*time[1]) / 2 << endl;
			return 0;
		}
	}

	int left = 0, right = n-1;
	double sum_l = 0, sum_r = 0;
	double ans = 0;
	while(right - left != 0)
	{
		if(sum_l <= sum_r)
		{
			ans += a[left];
			sum_l += time[left];
			left++;
		}
		else
		{
			sum_r += time[right];
			right--;
		}
	}
	//sum_r -= time[right];
	//sum_l -= time[left];
	if(sum_l <= sum_r)
	{
		cout << ans + (sum_r-sum_l)*b[left] + (a[left]-(sum_r-sum_l)*b[left+1])/2 << endl;
	}
	else
	{
		cout << ans + (a[left]-(sum_l-sum_r)*b[left])/2 << endl;
	}
	cout << sum_l << " " << sum_r << endl;
	cout << left << right;
}
