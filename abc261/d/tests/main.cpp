#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  ll n,m; cin >> n >> m;
  vector<ll> x(n+1);
  vector<ll> b(n+1);
  rrep(i,1,n) cin >> x[i];
  rep(i,0,m) {
    int c,y; cin >> c >> y;
    b[c] = y;
  }

  vector dp(n+1, vector<ll>(n+1));
  ll ans = -1e18;

  rrep(i,1,n) {
    rrep(j,1,i) {
        dp[i][j] = dp[i-1][j-1] + x[i] + b[j];
    }
    rep(j,0,i) {
      dp[i][0] = max(dp[i][0],dp[i-1][j]);
    }
  }
  rrep(i,0,n) ans = max(ans, dp[n][i]);
  cout << ans << endl;
}