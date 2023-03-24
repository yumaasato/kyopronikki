#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n; ll L, R;
  cin >> n >> L >> R;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  ll ans = R*n;
  ll suma = 0, sumb = 0, maxb = 0;
  rep(r,n) {
    suma += a[r];
    sumb += a[r]-L;
    maxb = max(maxb, sumb);
    ll now = suma + R*(n-r-1) - maxb;
    ans = min(ans, now);
  }
  cout << ans << endl;
  return 0;
}