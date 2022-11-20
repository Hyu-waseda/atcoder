#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int is = 0, it = 0;
	if(s == t){
		cout << "Yes" << endl;
		return 0;
	}
	/* if(s[is] != t[it]){
		cout << "No" << endl;
		return 0;
	}
	while(is != s.size() && it != t.size()){
		if(s[is] == t[it]){
			is++;
			it++;
		}
		else if(s[is] == t[it-1] && it >= 2 && t[it-1] == t[it-2]){
			is++;
		}
		else if(s[is-1] == t[it] && is >= 2 && s[is-1] == s[is-2]){
			it++;
		}
		else{
			cout << "No" << endl;
			return 0;
		}
	}
	if((t.size() == 1 && s.size() != 1) || (s.size() == 1 && t.size() != 1)){
		cout << "No" << endl;
		return 0;
	}
	if(is != s.size()){
		while(is != s.size()){
			if(s[is] != t[it-1] || (it >= 2 && t[it-1] != t[it-2])){
				cout << "No" << endl;
				return 0;
			}
			is++;
		}
	}
	if(it != t.size()){
		while(it != t.size()){
			if(t[it] != s[is-1] || (is >= 2 && s[is-1] != s[is-2])){
				cout << "No" << endl;
				return 0;
			}
			it++;
		}
	}
	cout << "Yes" << endl; */
	if(s[is] != t[it]){
		cout << "No" << endl;
		return 0;
	}
	if((t.size() == 1 && s.size() != 1) || (s.size() == 1 && t.size() != 1)){
		cout << "No" << endl;
		return 0;
	}
	is++;
	it++;
	int tmp_is = is, tmp_it = it;
	while(is != s.size() || it != t.size()){
		tmp_is = is;
		tmp_it = it;
		if(s[is] == t[it]){
			is++;
			it++;
		}
		else if(s[is] != s[is-1] && t[it] != t[it-1] && s[is] != t[it]){
			cout << "No" << endl;
			return 0;
		}
		else if(s[is] != s[is-1] && it >= 2 && t[it-1] == t[it-2] && t[it] == s[is-1]){
			it++;
		}
		else if(t[it] != t[it-1] && is >= 2 && s[is-1] == s[is-2] && s[is] == t[it-1]){
			is++;
		}
		else if(is < 2 || it < 2){
			cout << "No" << endl;
			return 0;
		}
		if(is == tmp_is && it == tmp_it){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	/* char a = s[0], b = t[0];
	bool flag_s = false, flag_t = false;
	while(is != s.size()-1 && it != t.size()){
		cout << a << " " << b << endl;
		cout << "s[" << is << "] " << s[is] << ", t[" << it << "] " << t[it] << endl; 
		if(s[is] == t[it]){
			a = s[is];
			b = t[it];
			is++;
			it++;
			if(s[is] == a){
				flag_s == true;
			}
			else{
				flag_s == false;
			}
			if(t[it] == b){
				flag_t == true;
			}
			else{
				flag_t == false;
			}
		}
		else if(s[is] == b && flag_t){
			a = s[is];
			is++;
			if(s[is] == a){
				flag_s == true;
			}
			else{
				flag_s == false;
			}
		}
		else if(t[it] == a && flag_s){
			b = t[it];
			it++;
			if(t[it] == b){
				flag_t == true;
			}
			else{
				flag_t == false;
			}
		}
		else{
			cout << "No" << endl;
			return 0;
		}
		if(s[is] == a){
			flag_s == true;
		}
		else{
			flag_s == false;
		}
		if(t[it] == b){
			flag_t == true;
		}
		else{
			flag_t == false;
		} 
	}
	cout << "Yes" << endl; */
}
