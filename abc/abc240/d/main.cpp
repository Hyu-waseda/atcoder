#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ans = 1, top = a[0], count = 1;
	cout << 1 << endl;
	for(int i = 1;i < n;i++){
		if(top == a[i]){
			count++;
			if(count == a[i]){
				ans -= a[i];
				if(i-a[i] >= 0){
					top = a[i-a[i]];
					count = 0;
					for(int j = i;i >= 0 && a[i-a[i]] == a[j];i--){
						count++;
					}
				}
				else{
					top = -1;
					count = 0;
				}
			}
		}
		else{
			top = a[i];
			count = 1;
		}
		ans++;
		cout << "ans = " << ans << ", top = " << top << ", count = " << count << endl;
	}
}
