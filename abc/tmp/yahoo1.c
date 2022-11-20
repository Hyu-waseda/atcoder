#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  // 入力の受け取り
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i = 0;i < n;i++){
    cin >> a[i];
  }

  // 比較しやすいようにソート
  sort(a.begin(), a.end());

  for(int i = 0;i + 3 < n;i++){
    // 隣り合う４本で正方形を作ることができればYESを出力
    if(a[i] == a[i + 1] && a[i + 1] == a[i + 2] && a[i + 2] == a[i + 3]){
      cout << "YES" << endl;
      return 0;
    }
  }
  // 正方形を作ることができなければNOを出力
  cout << "NO" << endl;

  return 0;
}