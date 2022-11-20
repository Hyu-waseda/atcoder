#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	map<string, pair<int, int>> top, bottom;
	string tmp, top_tmp, bottom_tmp;
	int max_n = -1;
	for(int i = 0;i < n;i++){
		cin >> tmp;
		for(int j = 1;j < tmp.size()-1;j++){
			top_tmp = tmp.substr(j);
			// cout << top_tmp << endl;
			top[top_tmp] = make_pair(tmp.size() - top_tmp.size(), i);
			// cout << top[top_tmp] << endl;
			if(bottom.count(top_tmp)) {
				max_n = max(max_n, int(top[top_tmp].first + bottom[top_tmp].first + top_tmp.size()));
			}
		}
		reverse(tmp.begin(), tmp.end());
		for(int j = 1;j < tmp.size()-1;j++){
			bottom_tmp = tmp.substr(j);
			// cout << bottom_tmp << endl;
			bottom[bottom_tmp] = make_pair(tmp.size() - bottom_tmp.size(), i);
			// cout << bottom[bottom_tmp] << endl;
			if(top.count(top_tmp) && ) {
				max_n = max(max_n, int(top[top_tmp].first + bottom[top_tmp].first + top_tmp.size()));
			}
		}
	}
}