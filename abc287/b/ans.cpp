#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i,n) cin >> s[i];

  set<string> ts;
  rep(i,m) {
    string t;
    cin >> t;
    ts.insert(t);
  }

  int ans = 0;
  rep(i,n) {
    if (ts.count(s[i].substr(3))) ans++;
  }
  cout << ans << endl;
  return 0;
}