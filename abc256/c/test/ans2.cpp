#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  const int n = 3, m = 30;
  vector<int> h(3), w(3);
  rep(i,n) cin >> h[i];
  rep(i,n) cin >> w[i];
  vector<vector<int>> a(n, vector<int>(n));
  int m4 = m*m*m*m;
  int ans = 0;
  rep(s,m4) {
    int tmp = s;
    a[0][0] = (tmp%m)+1; tmp /= m;
    a[0][1] = (tmp%m)+1; tmp /= m;
    a[1][0] = (tmp%m)+1; tmp /= m;
    a[1][1] = (tmp%m)+1; tmp /= m;
    bool ok = true;
    rep(i,2) {
      a[i][2] = h[i]-a[i][0]-a[i][1];
      if (a[i][2] < 1) ok = false;
    }
    rep(j,3) {
      a[2][j] = w[j]-a[0][j]-a[1][j];
      if (a[2][j] < 1) ok = false;
    }
    if (a[2][0]+a[2][1]+a[2][2] != h[2]) ok = false;
    if (ok) ans++;
  }
  cout << ans << endl;
  return 0;
}