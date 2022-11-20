#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;
void chmax(ll& a, ll b) { a = max(a,b);}

int main() {
  int n,m; cin >> n >> m;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  const ll INF = 1e18; // 無限大
  vector dp(n+1, vector<ll>(m+1, -INF));
  dp[0][0] = 0;

  rep(i,n) {
    rep(j,m+1) {
      chmax(dp[i+1][j], dp[i][j]);
      if(j) chmax(dp[i+1][j], dp[i][j-1]+a[i]*j);
    }
  }
  cout << dp[n][m] << endl;
}

