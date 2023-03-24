#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> f(n+1);
  rep(i,n+1) f[i] = i;
  for (int i = 2; i <= n; i++) {
    int x = i*i;
    if (x > n) break;
    for (int j = x; j <= n; j += x) {
      while (f[j]%x == 0) f[j] /= x;
    }
  }
  vector<int> c(n+1);
  for (int i = 1; i <= n; i++) c[f[i]]++;
  ll ans = 0;
  rep(i,n+1) ans += ll(c[i])*c[i];
  cout << ans << endl;
  return 0;
}