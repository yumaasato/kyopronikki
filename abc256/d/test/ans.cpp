#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;
void chmax(int& x, int y) { x = max(x, y);}

int main() {
  int n;
  cin >> n;
  vector<P> a(n);
  rep(i,n) cin >> a[i].first >> a[i].second;
  sort(a.begin(), a.end()); // a[i].firstの昇順
  vector<P> ans;
  for (auto [l,r] : a) {
    if (ans.size() == 0 || ans.back().second < l) { // back() 最後の要素
      ans.emplace_back(l,r);
    } else {
      chmax(ans.back().second, r);
    }
  }
  for (auto [l,r] : ans) printf("%d %d\n", l, r);
  return 0;
}