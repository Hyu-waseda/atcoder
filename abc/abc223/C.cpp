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
	int left = 0, right = n-1;
	double sum_l = time[0], sum_r = time[n-1];
	for(int i = 0;i < n-1;i++)
	{
		if(sum_l <= sum_r)
		{
			sum_l += time[left];
			left++;
		}
		else
		{
			sum_r += time[right];
			right--;
		}
		cout << sum_l << " " << sum_r << endl;
		if(left == right)
		{
			break;
		}
		//cout << left << right << endl;
	}
	cout << "left = " << left << " right = " << right << endl;
	cout << "sum_l = " << sum_l << " sum_r = " << sum_r << endl;
	if(n == 1)
	{
		cout << a[0] / 2 << endl;
	}
	else if(n == 2)
	{
		if(time[0] <= time[1])
		{
			cout << a[0] + (a[1]-b[1]*time[0]) / 2 << endl;
		}
		else
		{
			cout << a[0] - (a[0]-b[0]*time[1]) / 2 << endl;
		}
	}
	else
	{
		//sum_r -= time[right];
		//sum_l -= time[left];
		double count = 0;
		for(int i = 0;i < left;i++)
		{
			count += a[i];
		}
		if(sum_l <= sum_r)
		{
			sum_r -= time[right];
			cout << (a[right] - (sum_l - sum_r) * b[right+1])/2 + count << endl;
			//cout << (a[right] - (sum_r - sum_l) * b[right])/2 << endl;
		}
		else
		{
			//cout << (a[right] - abs(sum_l - sum_r) * b[right])/2 + count << endl;
		}

		//cout << (a[right] - abs(sum_r - sum_l) * b[right])/2 + count << endl;
		//cout << sum_l << endl;
	}
	//else if
	//cout << count << endl;
}