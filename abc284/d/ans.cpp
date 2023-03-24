#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  for (ll x = 2;; x++) {
    if (n%x) continue;
    n /= x;
    if (n%x == 0) {
      printf("%lld %lld\n", x, n/x);
      return;
    }
    ll p = round(sqrt(n));
    printf("%lld %lld\n", p, x);
    return;
  }
}

int main() {
  int T;
  cin >> T;
  rep(i,T) solve();
  return 0;
}