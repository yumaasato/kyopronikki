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
const ll mod = 998244353;
using P = pair<int, int>;

vector<vector<ll> > dp(1200000, vector<ll>(10));


int main() {
  ll n; cin >> n;

  rrep(i,1,9) dp[1][i] = 1;

  rrep(i,2,n)rrep(j,1,9) {
    for(int k = max(1,j-1); k <= min(9,j+1); k++) {
      dp[i][k] += dp[i-1][j];
      dp[i][k] %= mod;
    }
  }
  int res = 0;
  rrep(i,1,9) {
    res += dp[n][i];
    res %= mod;
  }
  cout << res << endl;
  return 0;
}