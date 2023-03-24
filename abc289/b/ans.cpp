#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> re(n+1);
  rep(i,m) {
    int a;
    cin >> a;
    re[a] = true;
  }
  vector<int> b;
  rep(i,n+1) if (!re[i]) b.push_back(i);

  vector<int> ans(n);
  rep(i,n) ans[i] = i+1;
  rep(i,b.size()-1) {
    reverse(ans.begin()+b[i], ans.begin()+b[i+1]); // レ点の区間で順序を逆にする
  }
  rep(i,n) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}