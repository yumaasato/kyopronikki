#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, q;
  cin >> n;

  map<int,ll> add;
  int base = 0;
  rep(i,n) {
    int a;
    cin >> a;
    add[i+1] += a;
  }

  cin >> q;
  rep(qi,q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x; cin >> x;
      base = x;
      add = map<int,ll>(); // 初期化
    }
    if (t == 2) {
      int i, x; cin >> i >> x;
      add[i] += x;
    }
    if (t == 3) {
      int i; cin >> i;
      ll ans = base+add[i];
      cout << ans << '\n';
    }
  }
  return 0;
}