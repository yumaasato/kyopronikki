#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  cin >> n;
  ll n2 = n*2;
  int ans = 0;
  auto check = [&](ll l) {
    ll tmp = n2/l-l+1;
    if (abs(tmp)%2 == 0) ++ans;
  };
  for (ll x = 1; x*x <= n2; x++) {
    if (n2%x) continue;
    ll y = n2/x;
    check(x);
    if (x != y) check(y);
  }
  cout << ans << endl;
  return 0;
}