#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,k; cin >> n >> k;
  vector<int> a(k);
  rep(i,0,k) cin >> a[i];
  vector dp(2, vector<int>(n+1));

  rrep(j,1,n) {
    { // 高橋くんのターン
      int now = 0;
      for(int x : a) {
        if(x <= j) now = max(now, dp[1][j-x]+x);
      }
        dp[0][j] = now;
    }
      { // 青木くんのターン
        int now = 1e9;
        for(int x :a) {
          if(x <= j) now = min(now,dp[0][j-x]+x);
        }
        dp[1][j] = now;
      }
    }
    cout << dp[0][n] << endl;
}
