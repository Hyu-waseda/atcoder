#include <bits/stdc++.h>
using namespace std;

double ans = 0;
for(int i = 0;i < n;i++)
{
	for(int j = 0;j < n;j++)
	{
		ans += sqrt(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2));
	}
}