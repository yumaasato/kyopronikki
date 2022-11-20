#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  const int M = 100005;
  int n;
  cin >> n;
  vector<int> x(M), a(M);
  rep(i,n) {
    int T, X, A;
    cin >> T >> X >> A;
    x[T] = X;
    a[T] = A;
  }

  const ll INF = 1e18;
  vector dp(M, vector<ll>(5, -INF));
  dp[0][0] = 0;
  rep(i,M-1) {
    int ni = i+1;
    rep(j,5) {
      for (int nj = j-1; nj <= j+1; nj++) {
        if (nj < 0 || nj >= 5) continue;
        dp[ni][nj] = max(dp[ni][nj], dp[i][j]);
      }
    }
    dp[ni][x[ni]] += a[ni];
  }

  ll ans = -INF;
  rep(j,5) ans = max(ans, dp[M-1][j]);
  cout << ans << endl;
  return 0;
}