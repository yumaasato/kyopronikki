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
  int n; cin >> n;
  vector<ll> a(100005);
  vector<ll> x(100005);
  rep(i,0,n) {
    ll t,xx,aa; cin >> t >> xx >> aa;
    x[t] = xx; a[t] = aa;
  }
  vector dp(5,vector<ll>(100005, -INF));


  rrep(t,1,100000){
    rrep(j,0,4) {
      dp[j][t] = dp[j][t-1];
      if(j != 0) dp[j][t] = max(dp[j][t], dp[j-1][t-1]);
      if(j != 4) dp[j][t] = max(dp[j][t], dp[j+1][t-1]);
      }
    dp[x[t]][t] += a[t];
  }

  ll ans = 0;
  rrep(i,0,4) ans = max(ans,dp[i][100000]);
  cout << ans << endl;
}