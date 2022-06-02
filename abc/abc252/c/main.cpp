#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	int ans = 2147483647, tmp;
	for(int i = 0;i <= 9;i++){
		tmp = 0;
		for(int j = 0;j < n;j++){
			for(int k = 0;k < 10;k++){
				if(s[j][k] == i+'0'){
					/* if(i == 1){
						cout << "k= " << k << endl;
					} */
					tmp = max(tmp, k);
					break;
				}
			}
		}
		int tmp2 = 0;
		int tmp3 = 0;
		for(int j = 0;j < 10;j++){
			int count = 0;
			for(int k = 0;k < n;k++){
				if(s[k][j] == i+'0'){
					count++;
				}
			}
			if (tmp2 <= count) {
				tmp2 = max(tmp2, count);
				tmp3 = (tmp2-1)*10+k;
			}
		}
		if (tmp2 >= 2){
			tmp2 = 10 * (tmp2-1);
		}
		//cout << "ans = " << ans << ", tmp2 = " << tmp2 << endl;
		if (tmp2 != 1) {
			ans = min(ans, tmp2);
		} else {
			ans = min(tmp, ans);
		}
		//ans = min(ans, tmp);
		//cout << i << " " << ans << endl;
	}
	cout << ans << endl;
}
