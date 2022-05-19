#include <bits/stdc++.h>
using namespace std;
/*
char make2(vector<char> a, int i)
{
	if(a[100-i-1] == '9')
	{
		make2(a, i+1)
	}
}

vector<char> make(vector<char> a)
{
	for(int i = 0;i < 101;i++)
	{
		if(a[100] - '0' == 9)
		{
			a[100];
		}
	}

}
*/
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<string>> b(n, vector<string> (m));
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			cin >> b[i][j];
		}
	}
	bool ans = false;
	int size = b[0][0].size();
	//vector<char> a(101, 0);
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m-1;j++)
		{
			size = b[i][j].size();
			int count = 0;
			while(1)
			{
				if(b[i][j+1].size() - b[i][j].size() != 0 && b[i][j+1].size() - b[i][j].size() != 1)
				{
					ans = true;
				}
				if(ans)
				{
					break;
				}
				if(b[i][j].size() == b[i][j+1].size())
				{

				if(b[i][j+1][size-1] - b[i][j][size-1] == 1)
				{
					count++;
					break;
				}
				else if(b[i][j+1][size-1] == '0' && b[i][j][size-1] == '9')
				{
					size--;
				}
				else
				{
					ans = true;
				}

				}
				else if(b[i][j].size() == b[i][j+1].size() - 1)
				{

				if(size == 0 && b[i][j+1][size] == '1')
				{
					break;
				}
				if(b[i][j+1][size] - b[i][j][size-1] == 1)
				{
					count++;
					break;
				}
				else if(b[i][j+1][size] == '0' && b[i][j][size-1] == '9')
				{
					size--;
				}
				else
				{
					ans = true;
				}
				if(ans)
				{
					break;
				}

				}
				
			}
			if(ans)
			{
				break;
			}
		}
		if(ans)
		{
			break;
		}
	}

	for(int i = 0;i < n-1;i++)
	{
			size = b[i][0].size();
			int count = 0;
			while(1)
			{
				if(b[i+1][0].size() - b[i][0].size() != 0 && b[i+1][0].size() - b[i][0].size() != 1)
				{
					ans = true;
				}
				if(ans)
				{
					break;
				}
				if(b[i][0].size() == b[i+1][0].size())
				{

				if(b[i+1][0][size-1] - b[i][0][size-1] == 7)
				{
					count++;
					break;
				}
				else if(b[i][0][size-1] == '0' && b[i][0][size-1] == '9')
				{
					size--;
				}
				else
				{
					ans = true;
				}

				}
				else if(b[i][0].size() == b[i][0].size() - 1)
				{

				if(size == 0 && b[i][0][size] == '1')
				{
					break;
				}
				if(b[i][0][size] - b[i][0][size-1] == 1)
				{
					count++;
					break;
				}
				else if(b[i][0][size] == '0' && b[i][0][size-1] == '9')
				{
					size--;
				}
				else
				{
					ans = true;
				}
				if(ans)
				{
					break;
				}

				}
				
			}
			if(ans)
			{
				break;
			}
	}

	if(ans)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
	/*
	vector<char> c(101, 0);
	for(int i = 0;i < b[0][0].size();i++)
	{
		a[101-i-1] = b[0][0][b[0][0].size()-i-1];
	}
	
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			for(int k = 0;k < size;k++)
			{
				if(a[100-k] != b[i][j][k])
				{
					ans = true;
					break;
				}
				a = make(a);
			}
			if(ans)
			{
				break;
			}
		}
		if(ans)
		{
			break;
		}
	}
	*/
}