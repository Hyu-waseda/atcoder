#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	int n;
	cin >> x >> n;
	/* vector<vector<string>> s(n, vector<string> (2, ""));
	for(int i = 0;i < n;i++){
		cin >> s[i][1];
		for(int j = 0;j < s[i][1].size();j++){
			s[i][0] += (x[s[i][1][j]-'a']);
		}
		//cout << s[i][0] << endl;
	} */
	vector<string>  s(n);
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	sort(s.begin(), s.end(), [&](string &a, string &b){
		int len = min(a.size(), b.size());
		for (int i = 0; i < len; i++) {
            if (a[i] != b[i]) {
                return x[a[i] - 'a'] < x[b[i] - 'a'];  
            }
        }
        return a.size() < b.size();
	});
	//sort(s.begin(),s.end(),[](const vector<string> &alpha,const vector<string> &beta){return alpha[0] < beta[0];});
    for(int i = 0;i < n;i++){
		cout << s[i] << endl;
	}
}
