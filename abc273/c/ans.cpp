#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  map<int,int> mp;
  rep(i,n) {
    int a;
    cin >> a;
    mp[a]++;
  }

  vector<int> ans;
  for (auto p : mp) ans.push_back(p.second);
  reverse(ans.begin(), ans.end());
  while (ans.size() < n) ans.push_back(0);
  rep(i,n) cout << ans[i] << '\n';
  return 0;
}