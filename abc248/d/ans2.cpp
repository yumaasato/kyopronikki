#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<vector<int>> is(n+1);
  rep(i,n) is[a[i]].push_back(i);
  int q;
  cin >> q;
  rep(qi,q) {
    int l, r, x;
    cin >> l >> r >> x;
    --l; --r;
    auto f = [&](vector<int>& is, int r) {
      return upper_bound(is.begin(),is.end(),r)-is.begin();
    };
    int ans = f(is[x], r) - f(is[x], l-1);
    printf("%d\n", ans);
  }
  return 0;
}