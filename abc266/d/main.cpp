#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  const int m = 100010;
  ll n; cin >> n;
  vector dp(m, vector<ll>(5, -INF));
  vector<ll> x(m),a(m);
  rep(i,n) {
    int T,X,A;
    cin >> T >> X >> A;
    x[T] = X;
    a[T] = A;
  }

  dp[0][0] = 0;

  rep(i,m-1) {
    rep(j,5) {
      rrep(k,j-1,j+1) {
        if(k < 0 || k >= 5) continue;
        dp[i+1][k] = max(dp[i+1][k], dp[i][j]);
      }
    }
    dp[i+1][x[i+1]] += a[i+1];
  }

  ll ans = 0;
  rep(i,5) {
    ans = max(ans,dp[m-1][i]);
  }
  cout << ans << endl;
  return 0;
}