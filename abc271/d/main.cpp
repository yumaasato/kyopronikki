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
  int n,s; cin >> n >> s;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i] >> b[i];

  vector<vector<bool> > dp(110, vector<bool>(10010));
  dp[0][0] = true;
  rep(i,n) {
  rep(j,s+1) if(dp[i][j]) {
      if(j+a[i] <= s) dp[i+1][j+a[i]] = true;
      if(j+b[i] <= s) dp[i+1][j+b[i]] = true;
      }
    }
  if(!dp[n][s]) {
    cout << "No" << endl;
    return 0;
  }

  string ans = "";
  drep(i,n-1,0) {
    if(s >= a[i] && dp[i][s-a[i]] == true) {
      s -= a[i];
      ans += 'H';
    }
    else {
      s -= b[i];
      ans += 'T';
    }
  }
  reverse(ans.begin(), ans.end());
  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}