#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll p, q, r, s;
  cin >> p >> q >> r >> s;
  int h = q-p+1, w = s-r+1;
  vector ans(h, string(w, '.'));
  rep(i,h)rep(j,w) {
    ll x = p+i, y = r+j;
    if (x-y == a-b || x+y == a+b) ans[i][j] = '#';
  }
  rep(i,h) cout << ans[i] << endl;
  return 0;
}