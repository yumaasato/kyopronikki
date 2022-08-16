#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // 符号付き整数型


int main(void) {
  ll n, k, x;
  ll ans = 0;
  ll a[200005];

  cin >> n >> k >> x;
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++) ans += a[i];

  ll m = 0;
  for (int i = 0; i < n; i++) m += a[i] / x;
  m = min(m,k);
  ans -= m*x, k -= m;

  for (int i = 0; i < n; i++) a[i] %= x;
  sort(a+1, a+n+1); // 昇順

  for (int i = n; i >= 1; i--) {
    if(k == 0) break;
    ans -= a[i], k--;
  }

  cout << ans << endl;
  return 0;
}