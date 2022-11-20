#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;
const ll mod = 998244353;

int main() {
  int n,m,k; cin >> n >> m >> k;
  vector<vector<ll> > dp(n+1,vector<ll>(k+1));
  dp[0][0] = 1;

  rrep(x,1,n)rrep(y,1,k) {
    ll num = 0;
    rrep(i,1,m) {
      if(y - i >= 0) {
        num += dp[x-1][y-i];
        num %= mod;
      }
    }
    dp[x][y] = num;
    dp[x][y] %= mod;
  }
  ll ans = 0;
  rrep(j,0,k) {
    ans += dp[n][j];
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}