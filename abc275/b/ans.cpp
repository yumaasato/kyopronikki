#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;


int main() {
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  mint ans = 0;
  ans = (mint)a*b*c - (mint)d*e*f;
  cout << ans.val() << '\n';
  return 0;
}