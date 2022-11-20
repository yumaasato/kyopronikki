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
  int m,n; cin >> n >> m;
  vector<int> a(n+1);
  rrep(i,1,n) cin >> a[i];

  vector dp(n+1, vector<ll>(n+1, -INF));

  rrep(i,0,n) dp[i][0] = 0;

  rrep(i,1,n)rrep(j,1,n) {
    if(j > i) dp[i][j] = -INF;
    else dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]+j*a[i]);
  }
  cout << dp[n][m] << endl;
}