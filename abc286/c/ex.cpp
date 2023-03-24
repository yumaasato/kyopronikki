#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  ll ans = 1e18;
  rep(ai,n) {
    ll now = (ll)a*ai;
    string t = s;
    rotate(t.begin(), t.begin()+ai, t.end());
    cout << t << endl;
    for (int l = 0, r = n-1; l < r; l++, r--) {
      if (t[l] != t[r]) now += b;
    }
    ans = min(ans, now);
  }

  cout << ans << endl;
  return 0;
}