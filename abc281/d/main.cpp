#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define all(x) x.begin(), x.end()
typedef long long ll;
void chmax(ll& a, ll b) { a = max(a,b);}
using P = pair<int, int>;

int main() {
  int n,K,d; cin >> n >> K >> d;
  vector<ll> a(n);

  rep(i,n) cin >> a[i];
  vector dp(109,vector(109,vector<ll>(109,-1)));
  dp[0][0][0] = 0;

  rep(i,n){
    rep(j,K+1) {
      rep(l,d) {
        if(dp[i][j][l] == -1) continue;
        chmax(dp[i+1][j][l],dp[i][j][l]);
        if(j != K) {
          chmax(dp[i+1][j+1][(l+a[i])%d], dp[i][j][l] + a[i]);
        }
      }
    }
  }
  cout << dp[n][K][0] << endl;
  return 0;
}